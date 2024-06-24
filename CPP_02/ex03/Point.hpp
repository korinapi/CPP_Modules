/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:41:36 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/22 14:27:27 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


class Point{
	private:
		Fixed const  x;
		Fixed const  y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		Point &operator=(const Point &other);
		~Point();

		Fixed getX() const;
		Fixed getY() const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif