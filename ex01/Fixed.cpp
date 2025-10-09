/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:41 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/09 17:39:09 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor with initializer list
Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
}

// ! (1 << this->fractionalBits) = 2^8 = 256
Fixed::Fixed(const int number) : fixedPointNumber(number * (1 << this->fractionalBits)){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) : fixedPointNumber(roundf(number * (1 << this->fractionalBits))){
    std::cout << "Float constructor called" << std::endl;
}

// * Copy constructor with initializer list
Fixed::Fixed(const Fixed &other) : fixedPointNumber(other.fixedPointNumber){
    std::cout << "Copy constructor called" << std::endl;
}

// * Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointNumber = other.fixedPointNumber;
    return *this;
}

// * Destructor
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

// * Setters & Getters
void Fixed::setRawBits(const int value){
    this->fixedPointNumber = value;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNumber;
}

// * Methods
int Fixed::toInt() const {
    return this->fixedPointNumber / (1 << this->fractionalBits);
}

float Fixed::toFloat() const {
    return (float)this->fixedPointNumber / (1 << this->fractionalBits);
}

// ? Operator insertion <<
// ! Overload: defining a function or an operator with the same name but with different parameters.
// ! The compiler automatically chooses the appropriate definition based on the type of the data.
// * We retrun reference of ostream type beacuse ostream non-copyable & The reference allows us to chaining: std::cout << a << b << c;
// ? std::ostream &output: id reference to the stream we are writing in & Non-const because we change the state of the stream when writing
// * (like buffer pointer, or state flags).
// ? std::ostream &output: reference to the stream we are writing in. Non-const because we change the state of the stream when writing
// * (like buffer pointer, or state flags). Re-references are important for chaining.
// ? const Fixed &other: a constant reference to the object we want to print.

std::ostream &operator<<(std::ostream &output, const Fixed &other){
    return output << other.toFloat();
}
