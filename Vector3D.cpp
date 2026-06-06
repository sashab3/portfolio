#include "Vector3D.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>

/** 
 * @post: Initializes x_, y_, and z_ to 0.0. 
 */

Vector3D::Vector3D() : x_(0.0), y_(0.0), z_(0.0) {}

/** 
 * @param x: The value to set for x_ component. 
 * @param y: The value to set for y_ component. 
 * @param z: The value to set for z_ component. 
 * @post: Initializes x_, y_, and z_ to the provided values. 
 */

Vector3D::Vector3D(double x, double y, double z) : x_(x), y_(y), z_(z) {}

double Vector3D::getX() const { 
    return x_;
}

void Vector3D::setX(double x) {
    x_ = x;
}

double Vector3D::getY() const {
    return y_;
}

void Vector3D::setY(double y) {
    y_ = y;
}

double Vector3D::getZ() const {
    return z_;
}

void Vector3D::setZ(double z) {
    z_ = z;
}

/** 
 * @return: The Euclidean magnitude (length) of the vector: sqrt(x^2 + y^2 + 
 z^2). 
 */

double Vector3D::calculateMagnitude() const {
    return std::sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
}

/**
 * @post: If magnitude > 0, each component is divided by the magnitude to create a unit vector.
 * If magnitude is 0, no change is made.
 */

void Vector3D::normalize() {
    double mag = calculateMagnitude();
    if (mag > 0.0) {
        x_ /= mag;
        y_ /= mag;
        z_ /= mag;
    }
}

/**
 * @post: Displays the vector in the format: Vector[x, y, z] (values to 2 decimal places) with a newline at the end.
 */

void Vector3D::display() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Vector[" << x_ << ", " << y_ << ", " << z_ << "]\n";
}