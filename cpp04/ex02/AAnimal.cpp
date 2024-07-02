/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:14:05 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 14:18:33 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal() : _type(""), _brain(new Brain()) {
	std::cout << "[ AAnimal ]     constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "[ AAnimal ]     destructor called" << std::endl;
	delete _brain;
}

AAnimal::AAnimal(const AAnimal &other) : _type(other._type), _brain(new Brain(*(other._brain))) {
	std::cout << "[ AAnimal ]     copy constructor called" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	std::cout << "[ AAnimal ]     assignation operator called" << std::endl;
	if (this != &other) {
		_type = other._type;
		*_brain = *(other._brain);
	}
	return *this;
}

std::string AAnimal::getType() const {
	return _type;
}

Brain &AAnimal::getBrain() const {
	return *_brain;
}