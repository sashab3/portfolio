/*
@file EulerRotation.cpp
@name Oleksandra Babeshko
@date 03/13/2026
@brief Euler Rotation rotations 
*/

#include "EulerRotation.hpp"

/**
* @post: Initializes roll_, pitch_, and yaw_ to 0.0
* Sets type_ to "EULER"
*/

EulerRotation::EulerRotation()
    : Rotation("EULER"), roll_(0.0), pitch_(0.0), yaw_(0.0) {}

/**
* @param roll: The roll angle
* @param pitch: The pitch angle
* @param yaw: The yaw angle
* @post: Initializes roll_, pitch_, and yaw_ to the provided values
* Sets type_ to "EULER"
*/

EulerRotation::EulerRotation(double roll, double pitch, double yaw)
    : Rotation("EULER"), roll_(roll), pitch_(pitch), yaw_(yaw) {}

/**
* @return: The value of roll_
* @note: This function should be marked const!
*/

double EulerRotation::getRoll() const {
    return roll_;
}

/**
* @return: The value of pitch_
* @note: This function should be marked const!
*/

double EulerRotation::getPitch() const {
    return pitch_;
}

/**
* @return: The value of yaw_
* @note: This function should be marked const!
*/

double EulerRotation::getYaw() const {
    return yaw_;
}

bool EulerRotation::operator==(const EulerRotation& other) const
{
    const double EPSILON = 0.001;

    return std::abs(roll_ - other.roll_) < EPSILON &&
           std::abs(pitch_ - other.pitch_) < EPSILON &&
           std::abs(yaw_ - other.yaw_) < EPSILON;
}