/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:18:46 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:41:19 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

Ice::Ice(Ice const &other) : AMateria("ice") {
	*this = other;
}

Ice &Ice::operator=(Ice const &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return (*this);
}

Ice::~Ice() {
}


void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}