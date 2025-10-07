/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:43 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/07 16:39:54 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// * Includes
#include <iostream>

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

        // * Copy constructor
        Fixed(const Fixed &other);

        // * Copy assignment operator
        Fixed &operator=(const Fixed &other); 

        // * Destructor
        ~Fixed();

        // * Setters & Getters
        void setRawBits(const int value);
        int getRawBits() const;
};

#endif
