/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:06:08 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/09 17:36:52 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// * Includes
#include <iostream>
#include <cmath>

// * Classes With Orthodox Canonical Form
class Point{
    // ! private
    private:

    // ! public
    public:
    // * Default Destructor
    Point();
    
    // * Copy Constructor
    Point(const Point &other);

    // * Copy Assignemnt
    Point &operator=(const Point &other);

    // * Destructor
    ~Point();
};

#endif