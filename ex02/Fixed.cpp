/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:41 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/07 18:51:04 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ! Definitions of Constructor, Destructor, Member functions, and Setters, Getters

// * Default constructor with initializer list
Fixed::Fixed(){}

// ! (1 << this->fractionalBits) = 2^8 = 256
Fixed::Fixed(const int number) : fixedPointNumber(number * (1 << this->fractionalBits)){}

Fixed::Fixed(const float number) : fixedPointNumber(roundf(number * (1 << this->fractionalBits))){}

// * Copy constructor with initializer list
Fixed::Fixed(const Fixed &other) : fixedPointNumber(other.fixedPointNumber){}

// * Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other){
    this->fixedPointNumber = other.fixedPointNumber;
    return *this;
}

// * Destructor
Fixed::~Fixed(){}

// * Setters & Getters
void Fixed::setRawBits(const int value){
    this->fixedPointNumber = value;
}

int Fixed::getRawBits() const {
    return this->fixedPointNumber;
}

// * Methods
int Fixed::toInt() const {
    return this->fixedPointNumber / (1 << this->fractionalBits);
}

float Fixed::toFloat() const {
    return (float)this->fixedPointNumber / (1 << this->fractionalBits);
}

// * Operator <<
// ! Overload = defining a function or an operator with the same name but with different parameters.
// ! The compiler automatically chooses the appropriate definition based on the type of the data.
std::ostream &operator<<(std::ostream &output, const Fixed &other){
    return output << other.toFloat();
}

// * (+ - * /) Operator
Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

