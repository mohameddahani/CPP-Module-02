/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:41 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/09 17:38:57 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default constructor with initializer list
Fixed::Fixed(): fixedPointNumber(0){}

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


// * (+ - * /) Operator
// ! Caller --> (Operator +-*/) <-- Input: so the caller call the operator and the operator needs the input inside it so you need to add input on parameter
Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result(this->toFloat() + other.toFloat());
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result(this->toFloat() - other.toFloat());
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result(this->toFloat() * other.toFloat());
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result(this->toFloat() / other.toFloat());
    return result;
}

// * (pre ++ post ++ & pre -- post --) Operator
// ! if you add int in parameter like you tell the compailer is post not pre
Fixed &Fixed::operator++(){
    this->fixedPointNumber++;
    return *this;
}
Fixed &Fixed::operator--(){
    this->fixedPointNumber--;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed old = *this;
    this->fixedPointNumber++;
    return old;
}

Fixed Fixed::operator--(int){
    Fixed old = *this;
    this->fixedPointNumber--;
    return old;
}

// * Comparison operators (> < >= <= == !=)
bool Fixed::operator>(const Fixed &other) const{
    return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed &other)const{
    return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed &other) const{
    return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed &other) const{
    return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed &other) const{
    return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed &other) const{
    return this->toFloat() != other.toFloat();
}

// * max and min
Fixed &Fixed::min(Fixed &obj1, Fixed &obj2){
    if (obj1.toFloat() > obj2.toFloat()){
        return obj2;
    } else {
        return obj1;
    }
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2){
    if (obj1.toFloat() > obj2.toFloat()){
        return obj2;
    } else {
        return obj1;
    }
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2){
    if (obj1.toFloat() > obj2.toFloat()){
        return obj1;
    } else {
        return obj2;
    }
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2){
    if (obj1.toFloat() > obj2.toFloat()){
        return obj1;
    } else {
        return obj2;
    }
}

// * Operator << insertio
// ! Overload = defining a function or an operator with the same name but with different parameters.
// ! The compiler automatically chooses the appropriate definition based on the type of the data.
std::ostream &operator<<(std::ostream &output, const Fixed &other){
    return output << other.toFloat();
}
