/*
@file AxisAngleRotation.hpp
@name Oleksandra Babeshko
@date 03/13/2026
@brief Axis Angle Rotation class creation 
*/

#ifndef AXISANGLEROTATION_HPP
#define AXISANGLEROTATION_HPP

#include "Rotation.hpp"
#include "Vector3D.hpp"

/**
* @class AxisAngleRotation
* @brief Rotation represented by an axis vector and an angle.
*/

class AxisAngleRotation : public Rotation {
private:
    Vector3D axis_;
    double angle_;

public:
    /**
    * @post: Initializes axis_ to Vector3D(0.0, 0.0, 0.0) and angle_ to 0.0
    * Sets type_ to "AXIS_ANGLE"
    */
    
    AxisAngleRotation();

    /**
    * @param axis: The rotation axis as a Vector3D
    * @param angle: The rotation angle
    * @post: Initializes axis_ and angle_ to the provided values
    * Sets type_ to "AXIS_ANGLE"
    */
    
    AxisAngleRotation(const Vector3D& axis, double angle);

    /**
    * @return: The value of axis_
    * @note: This function should be marked const!
    */
    
    Vector3D getAxis() const;

    /**
    * @return: The value of angle_
    * @note: This function should be marked const!
    */
    
    double getAngle() const;

    bool operator==(const AxisAngleRotation& other) const;
};

#endif