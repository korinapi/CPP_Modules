/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:17:03 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 18:18:37 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(param << fractionalBits);
}
Fixed::Fixed(const float param){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(std::roundf(param * (1 << fractionalBits)));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	return value;
}

void Fixed::setRawBits(int const raw){
	this->value = raw;
}
float Fixed::toFloat(void) const{
	return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt(void) const{
	return value >> fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return out;
}
