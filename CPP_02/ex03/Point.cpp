/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:47:14 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/22 14:33:34 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){
}

Point::Point(const float x, const float y) : x(x), y(y){
}

Point::Point(const Point &other) : x(other.x), y(other.y){
}

Point &Point::operator=(const Point &other){
	if (this != &other){
		(Fixed) this->x = other.x;
		(Fixed) this->y = other.y;
	}
	return *this;
}

Point::~Point(){
}

Fixed Point::getX() const{
	return x;
}

Fixed Point::getY() const{
	return y;
}
