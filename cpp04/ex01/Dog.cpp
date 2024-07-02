/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:52:01 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 11:51:51 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	_type = "Dog";
	std::cout << "[ Dog ]		constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other){
	std::cout << "[ Dog ]         copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
	if (this != &other)
		Animal::operator=(other);
	std::cout << "[ Dog ]         copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "[ Dog ]		destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof! Woof!" << std::endl;
}