/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:27:14 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/10 21:55:22 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void ) {
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);
    Point point(2.0f, 2.0f);

    if (bsp(a, b, c, point)){
        std::cout << "The point is inside of triangle" << std::endl;
    } else {
        std::cout << "The point is outside of triangle" << std::endl;
    }
    
}
