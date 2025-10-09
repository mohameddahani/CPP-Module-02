/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:43 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/09 17:30:32 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// * Includes
#include <iostream>
#include <cmath>

// * Classes With Orthodox Canonical Form
class Fixed{
    // ! private
    private:
        int fixedPointNumber;
        static const int fractionalBits = 8;

    // ! public
    public:
        // * Default constructor
        Fixed();

        Fixed(const int number);
        Fixed(const float number);

        // * Copy constructor
        Fixed(const Fixed &other);

        // * Copy assignment operator
        Fixed &operator=(const Fixed &other);

        // * Destructor
        ~Fixed();

        // * Setters & Getters
        void setRawBits(const int value);
        int getRawBits() const;

        // * Methods
        float toFloat() const;
        int toInt() const;

        // * (+ - * /) Operators
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        // * (pre ++ post ++ & pre -- post --) Operator
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        // * Comparison operators (> < >= <= == !=)
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        

        // * max and min
        static Fixed &min(Fixed &obj1, Fixed &obj2);
        static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
        
        static Fixed &max(Fixed &obj1, Fixed &obj2);
        static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream &operator<<(std::ostream &output, const Fixed &other);

#endif
