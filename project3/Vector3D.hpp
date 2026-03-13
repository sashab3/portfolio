/*
@file Vector3D.hpp
@name Oleksandra Babeshko
@date 03/12/2026
@brief Vector3D class declaration
*/

#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

class Vector3D {
    private:
        double x_;
        double y_;
        double z_;

    public:
        /** 
        * @post: Initializes x_, y_, and z_ to 0.0. 
        */

        Vector3D();

        /** 
        * @param x: The value to set for x_ component. 
        * @param y: The value to set for y_ component. 
        * @param z: The value to set for z_ component. 
        * @post: Initializes x_, y_, and z_ to the provided values. 
        */ 

        Vector3D(double x, double y, double z);

        /** 
        * @return: The value of the x_ component. 
        * @note: This function should be marked const! 
        */ 
       
        double getX() const;
        
        /** 
        * @param x: The value to set for the x_ component. 
        * @post: Updates the x_ component. 
        */ 

        void setX(double x);

        /** 
        * @return: The value of the y_ component. 
        * @note: This function should be marked const! 
        */ 

        double getY() const;

        /** 
        * @param y: The value to set for the y_ component. 
        * @post: Updates the y_ component. 
        */ 

        void setY(double y);

        /** 
        * @return: The value of the z_ component. 
        * @note: This function should be marked const! 
        */ 

        double getZ() const; 

        /** 
        * @param z: The value to set for the z_ component. 
        * @post: Updates the z_ component. 
        */

        void setZ(double z);

        /** 
        * @return: The Euclidean magnitude (length) of the vector: sqrt(x^2 + y^2 + 
        z^2). 
        */ 

        double calculateMagnitude() const;

        /** 
        * @post: If magnitude > 0, each component is divided by the magnitude to 
        create a unit vector. 
        * If magnitude is 0, no change is made. 
        */ 
        
        void normalize();

        /** 
        * @post: Displays the vector in the format: Vector[x, y, z] (values to 2 
        decimal places) with a newline at the end. 
        */

        void display() const; 

        bool operator==(const Vector3D& other) const;

};

#endif