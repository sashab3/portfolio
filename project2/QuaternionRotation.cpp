/*
@file QuaternionRotation.cpp
@name Oleksandra Babeshko
@date 02/23/2026
@brief Quaternion Rotation initialization
*/

#include "QuaternionRotation.hpp"

/**
* @post: Initializes w_, x_, y_, and z_ to 0.0
* Sets type_ to "QUATERNION"
*/

QuaternionRotation::QuaternionRotation()
    : Rotation("QUATERNION"), w_(0.0), x_(0.0), y_(0.0), z_(0.0) {}

/**
* @param w: The w component
* @param x: The x component
* @param y: The y component
* @param z: The z component
* @post: Initializes w_, x_, y_, and z_ to the provided values
* Sets type_ to "QUATERNION"
*/

QuaternionRotation::QuaternionRotation(double w, double x, double y, double z)
    : Rotation("QUATERNION"), w_(w), x_(x), y_(y), z_(z) {}

/**
* @return: The value of w_
* @note: This function should be marked const!
*/

double QuaternionRotation::getW() const {
    return w_;
}

/**
* @return: The value of x_
* @note: This function should be marked const!
*/

double QuaternionRotation::getX() const {
    return x_;
}

/**
* @return: The value of y_
* @note: This function should be marked const!
*/

double QuaternionRotation::getY() const {
    return y_;
}

/**
* @return: The value of z_
* @note: This function should be marked const!
*/

double QuaternionRotation::getZ() const {
    return z_;
}