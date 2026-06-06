/*
@file AxisAngleRotation.cpp
@name Oleksandra Babeshko
@date 03/13/2026
@brief Axis Angle Rotation initialization
*/

#include "AxisAngleRotation.hpp"

/**
* @post: Initializes axis_ to Vector3D(0.0, 0.0, 0.0) and angle_ to 0.0
* Sets type_ to "AXIS_ANGLE"
*/

AxisAngleRotation::AxisAngleRotation()
    : Rotation("AXIS_ANGLE"), axis_(0.0, 0.0, 0.0), angle_(0.0) {}

/**
* @param axis: The rotation axis as a Vector3D
* @param angle: The rotation angle
* @post: Initializes axis_ and angle_ to the provided values
* Sets type_ to "AXIS_ANGLE"
*/

AxisAngleRotation::AxisAngleRotation(const Vector3D& axis, double angle)
    : Rotation("AXIS_ANGLE"), axis_(axis), angle_(angle) {}

/**
* @return: The value of axis_
* @note: This function should be marked const!
*/

Vector3D AxisAngleRotation::getAxis() const {
    return axis_;
}

/**
* @return: The value of angle_
* @note: This function should be marked const!
*/

double AxisAngleRotation::getAngle() const {
    return angle_;
}

bool AxisAngleRotation::operator==(const AxisAngleRotation& other) const
{
    const double EPSILON = 0.001;

    return (axis_ == other.axis_) &&
           (std::abs(angle_ - other.angle_) < EPSILON);
}