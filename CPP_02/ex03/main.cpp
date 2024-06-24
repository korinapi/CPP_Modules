/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:51:37 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/22 14:45:38 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"



/*
Calculate the Signed Area for Each Sub-Triangle:


d1 = (P-A) x (B-A)
d2 = (P-B) x (C-B)
d3 = (P-C) x (A-C)

d1 = (x - x1) * (y1 - y2) - (x1 - x2) * (y - y1)
d2 = (x - x2) * (y2 - y3) - (x2 - x3) * (y - y2)
d3 = (x - x3) * (y3 - y1) - (x3 - x1) * (y - y3)

                    B (15, 20)
                  / \
                 /   \
                /     \
               /   P   \
              /_________\
          A (0, 0)       C (30, 0)

Sign Calculation: Instead of calculating the actual area, 
we focus on the sign of the result (positive, negative, or zero). 
The sign of the area can be used to determine the relative position of the points.

If the signs of the areas of all three sub-triangles are the same, 
then the point P is inside the triangle. 
Otherwise, the point is outside the triangle.
To ensure points on the edges or vertices are considered outside,
the function checks for any zero determinants and returns false if found.

*/


int main() {
    const Point a(0, 0);
    const Point b(10, 20);
    const Point c(30, 0);
    const Point p(10, 20);

    if (bsp(a, b, c, p)) {
        std::cout << "Point is inside the triangle" << std::endl;
    } else {
        std::cout << "Point is outside the triangle" << std::endl;
    }

    return 0;
}
