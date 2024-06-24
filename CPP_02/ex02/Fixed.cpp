/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:42:28 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/22 15:16:09 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : value(0){
}

Fixed::Fixed(const int param){
	this->setRawBits(param << fractionalBits);
}
Fixed::Fixed(const float param){
	this->setRawBits(std::roundf(param * (1 << fractionalBits)));
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &other){
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other){
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


//comparison operators
bool Fixed::operator>(const Fixed &other) const{
	return this->toFloat() > other.toFloat();
}
bool Fixed::operator<(const Fixed &other) const{
	return this->toFloat() < other.toFloat();
}
bool Fixed::operator>=(const Fixed &other) const{
	return this->toFloat() >= other.toFloat();
}
bool Fixed::operator<=(const Fixed &other) const{
	return this->toFloat() <= other.toFloat();
}
bool Fixed::operator==(const Fixed &other) const{
	return this->toFloat() == other.toFloat();
}
bool Fixed::operator!=(const Fixed &other) const{
	return this->toFloat() != other.toFloat();
}

//arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const{
	Fixed result;
	int rawResult = this->getRawBits() + other.getRawBits();
	result.setRawBits(rawResult);
	return result;
}
Fixed Fixed::operator-(const Fixed &other) const{
	Fixed result;
	int rawResult = this->getRawBits() - other.getRawBits();
	result.setRawBits(rawResult);
	return result;
}
Fixed Fixed::operator*(const Fixed &other) const{
	Fixed result;
	int64_t multiplied = static_cast<int64_t>(this->getRawBits()) * other.getRawBits();
	int rawResult = static_cast<int>(multiplied >> fractionalBits);
	result.setRawBits(rawResult);
	return result;
}
Fixed Fixed::operator/(const Fixed &other) const{
	Fixed result;
	int64_t dividend = static_cast<int64_t>(this->getRawBits()) << fractionalBits;
	int rawResult = static_cast<int>(dividend / other.getRawBits());
	result.setRawBits(rawResult);
	return result;
}

//pre/post increment/decrement
Fixed &Fixed::operator++(){
	this->value++;
	return *this;
}
Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	operator++();
	return tmp;
}
Fixed &Fixed::operator--(){
	this->value--;
	return *this;
}
Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	operator--();
	return tmp;
}

//min/max
Fixed &Fixed::min(Fixed &a, Fixed &b){
	return a < b ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	return a < b ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
	return a > b ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	return a > b ? a : b;
}