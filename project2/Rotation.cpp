/*
@file Rotation.cpp
@name Oleksandra Babeshko
@date 02/23/2026
@brief Rotation types
*/

#include "Rotation.hpp"

/**
 * @param type: The rotation type
 * @post: Initializes type_ to the provided value
 */

Rotation::Rotation(const std::string& type) : type_(type) {}

/**
 * @return: The value of type_
 * @note: This function should be marked const!
 */

std::string Rotation::getType() const {
    return type_;
}

/**
 * @brief Virtual destructor to ensure proper cleanup of derived classes.
 */

Rotation::~Rotation() = default;