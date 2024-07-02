/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:50:25 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 14:25:28 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	_type = "Cat";
	std::cout << "[ Cat ]		constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other){
	std::cout << "[ Cat ]         copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	if (this != &other)
		AAnimal::operator=(other);
	std::cout << "[ Cat ]         copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "[ Cat ]		destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow!" << std::endl;
}