/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:06:08 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/09 18:01:49 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

// * Includes
#include <iostream>
#include "Fixed.hpp"

// * Classes With Orthodox Canonical Form
class Point{
    // ! private
    private:
        Fixed const x;
        Fixed const y;

    // ! public
    public:
        // * Default Destructor
        Point();

        // * Contructor
        Point(float x, float y);
    
        // * Copy Constructor
        Point(const Point &other);

        // * Copy Assignemnt
        Point &operator=(const Point &other);

        // * Destructor
        ~Point();
};

#endif