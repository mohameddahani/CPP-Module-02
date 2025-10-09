/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:06:16 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/09 18:45:34 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// ! Definitions of Orthodox Canonical Form, Member functions, and Setters, Getters

// * Default Destructor
Point::Point(): x(0), y(0){}

// * Contructor
Point::Point(float x, float y): x(x), y(y){}

// * Copy Constructor
Point::Point(const Point &other): x(other.x), y(other.y){}

// * Copy Assignemnt
Point &Point::operator=(const Point &other){
    // * Since x and y are constants, this means that the Point object itself cannot be modified after it is created.
    // * Therefore, you must disable the assignment operator entirely.
    (void) other;
    return *this;
}

// * Destructor
Point::~Point(){}

