/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:06:33 by mdahani           #+#    #+#             */
/*   Updated: 2025/10/10 21:49:42 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// * bsp
bool bsp(Point const a, Point const b, Point const c, Point const point){
    // * Area
    Point area;

    // * Triangles
    Fixed ABC(area.calcAreaOfTriangle(a, b, c));
    Fixed PAB(area.calcAreaOfTriangle(point, a, b));
    Fixed PBC(area.calcAreaOfTriangle(point, b, c));
    Fixed PAC(area.calcAreaOfTriangle(point, a, c));

    // * Logic
    if (PAB.toFloat() == 0.0f || PBC.toFloat() == 0.0f || PAC.toFloat() == 0.0f){
        return false;
    }
    return ABC.toFloat() == (PAB.toFloat() + PBC.toFloat() + PAC.toFloat());
}