/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:06:16 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/10 21:19:18 by mdahani          ###   ########.fr       */
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

// * Getters & Setters
Fixed Point::getX() const{
    return this->x;
}

Fixed Point::getY() const{
    return this->y;
}

 // * Method
/*

! Area Rule for Triangle (BSP Exercise)
todo: Area = | Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By) | * 1/2 

* Where:

* Ax = X coordinate of point A
* Ay = Y coordinate of point A
* Bx = X coordinate of point B
* By = Y coordinate of point B
* Cx = X coordinate of point C
* Cy = Y coordinate of point C
* | ... | = Absolute value (to ensure area is positive)

*/

// * Calculating the area of ​​a triangle
const Fixed Point::calcAreaOfTriangle(Point const a, Point const b, Point const c) const {
    Fixed result = ((a.getX() * (b.getY() - c.getY())) +
                    (b.getX() * (c.getY() - a.getY())) +
                    (c.getX() * (a.getY() - b.getY()))) / Fixed(2);

    if (result < 0)
        result = result * Fixed(-1);

    return result;
}
