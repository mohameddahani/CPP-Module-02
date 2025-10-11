/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:41 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/11 09:35:20 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor with initializer list
Fixed::Fixed() : fixedPointNumber(0){
    std::cout << "Default constructor called" << std::endl;
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
void Fixed::setRawBits(const int raw){
    this->fixedPointNumber = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNumber;
}
