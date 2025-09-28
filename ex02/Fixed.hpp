/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:43 by mdahani           #+#    #+#             */
/*   Updated: 2025/09/28 15:37:00 by mdahani          ###   ########.fr       */
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

        // * (+ - * /) Operator
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        // * (pre ++ post ++ & pre -- post --) Operator
        Fixed &operator++();
        Fixed &operator++(int);
        Fixed &operator--();
        Fixed &operator--(int);
};

std::ostream &operator<<(std::ostream &output, const Fixed &other);

#endif
