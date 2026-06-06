/*
@file Rotation.hpp
@name Oleksandra Babeshko
@date 02/23/2026
@brief Rotation class creation
*/

#ifndef ROTATION_HPP
#define ROTATION_HPP

#include <string>

class Rotation {
    protected:
        std::string type_; 

    public:

        /**
        * @param type: The rotation type
        * @post: Initializes type_ to the provided value
        */

        Rotation(const std::string& type);

        /**
        * @return: The value of type_
        * @note: This function should be marked const!
        */

        std::string getType() const;

        /**
        * @brief Virtual destructor to ensure proper cleanup of derived classes.
        */

        virtual ~Rotation();
};

#endif