/*
@file RotationRegistry.hpp
@name Oleksandra Babeshko
@date 03/13/2026
@brief Rotation registry
*/

#include "RotationRegistry.hpp"
#include "QuaternionRotation.hpp"
#include "AxisAngleRotation.hpp"
#include "Vector3D.hpp"
#include <vector>
#include <cmath>

/**
 * @post: Initializes the RotationRegistry as an empty ArrayBag of Rotation pointers.
 */
RotationRegistry::RotationRegistry() : ArrayBag<Rotation*>()
{
}

/**
 * @param rotation: A pointer to a Rotation object.
 * @return: True if the rotation was successfully added, false otherwise.
 * @post: Adds a rotation to the registry.
 */
bool RotationRegistry::addRotation(Rotation* rotation)
{
    return add(rotation);
}

/**
 * @return: The count of QuaternionRotation objects in the registry.
 */
int RotationRegistry::countQuaternions() const
{
    int count = 0;
    std::vector<Rotation*> rotations = toVector();

    for (Rotation* rotation : rotations)
    {
        if (dynamic_cast<QuaternionRotation*>(rotation) != nullptr)
        {
            count++;
        }
    }

    return count;
}

/**
 * @return: The average magnitude of the axes in all AxisAngleRotation objects in the registry.
 * Returns 0.0 if no AxisAngleRotations exist.
 */
double RotationRegistry::getAverageMagnitude() const
{
    std::vector<Rotation*> rotations = toVector();

    double sum = 0.0;
    int count = 0;

    for (Rotation* rotation : rotations)
    {
        AxisAngleRotation* axisAnglePtr = dynamic_cast<AxisAngleRotation*>(rotation);

        if (axisAnglePtr != nullptr)
        {
            Vector3D axis = axisAnglePtr->getAxis();

            double x = axis.getX();
            double y = axis.getY();
            double z = axis.getZ();

            double magnitude = std::sqrt(x * x + y * y + z * z);

            sum += magnitude;
            count++;
        }
    }

    if (count == 0)
    {
        return 0.0;
    }

    return sum / count;
}