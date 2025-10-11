/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:43 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/11 09:34:41 by mdahani          ###   ########.fr       */
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
        void setRawBits(const int raw);
        int getRawBits() const;

        // * Methods
        float toFloat() const;
        int toInt() const;
};

// * std::ostream &operator<<(std::ostream &output, const Fixed &other);
std::ostream &operator<<(std::ostream &output, const Fixed &other);

#endif
