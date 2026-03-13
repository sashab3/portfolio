/*
@file EulerRotation.hpp
@name Oleksandra Babeshko
@date 03/13/2026
@brief Euler Rotation class creation 
*/

#ifndef EULERROTATION_HPP
#define EULERROTATION_HPP

#include "Rotation.hpp"

class EulerRotation : public Rotation {
private:
    double roll_;
    double pitch_;
    double yaw_;

public:
    /**
    * @post: Initializes roll_, pitch_, and yaw_ to 0.0
    * Sets type_ to "EULER"
    */
    
    EulerRotation();

    /**
    * @param roll: The roll angle
    * @param pitch: The pitch angle
    * @param yaw: The yaw angle
    * @post: Initializes roll_, pitch_, and yaw_ to the provided values
    * Sets type_ to "EULER"
    */
    
    EulerRotation(double roll, double pitch, double yaw);

    /**
    * @return: The value of roll_
    * @note: This function should be marked const!
    */
    
    double getRoll() const;

    /**
    * @return: The value of pitch_
    * @note: This function should be marked const!
    */

    double getPitch() const;

    /**
    * @return: The value of yaw_
    * @note: This function should be marked const!
    */

    double getYaw() const;

    bool operator==(const EulerRotation& other) const;
};

#endif