/*
@file RotationRegistry.hpp
@name Oleksandra Babeshko
@date 03/13/2026
@brief Rotation registry
*/

#ifndef ROTATIONREGISTRY_HPP
#define ROTATIONREGISTRY_HPP

#include "ArrayBag.hpp"
#include "Rotation.hpp"

class RotationRegistry : public ArrayBag<Rotation*>
{
public:
    /**
     * @post: Initializes the RotationRegistry as an empty ArrayBag of Rotation pointers.
     */
    RotationRegistry();

    /**
     * @param rotation: A pointer to a Rotation object.
     * @return: True if the rotation was successfully added, false otherwise.
     * @post: Adds a rotation to the registry.
     */
    bool addRotation(Rotation* rotation);

    /**
     * @return: The count of QuaternionRotation objects in the registry.
     */
    int countQuaternions() const;

    /**
     * @return: The average magnitude of the axes in all AxisAngleRotation objects in the registry.
     * Returns 0.0 if no AxisAngleRotations exist.
     */
    double getAverageMagnitude() const;
};

#endif