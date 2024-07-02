/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:20:03 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:38:52 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const &other) : AMateria("cure") {
	*this = other;
}

Cure &Cure::operator=(const Cure &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

Cure::~Cure() {
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
