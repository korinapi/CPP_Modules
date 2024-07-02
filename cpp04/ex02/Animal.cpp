/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:48:31 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 12:08:57 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type(""), brain(new Brain()){
	std::cout << "[ Animal ]	constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type), brain(new Brain(*other.brain)) {
	std::cout << "[ Animal ]	copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	if (this != &other) {
		_type = other._type;
		*brain = *other.brain;
	}
	std::cout << "[ Animal ]	copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal() {
	delete brain;
	std::cout << "[ Animal ]	destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
	return _type;
}

Brain& Animal::getBrain() const {
	return *brain;
}