/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:15:26 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:53:02 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria() : _type("") {
}

AMateria::AMateria(std::string const &type) : _type(type) {
}

AMateria::AMateria(AMateria const &src) {
	*this = src;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

AMateria::~AMateria() {
}

// Just a generic use function, could be overridden by derived classes

void AMateria::use(ICharacter &target) {
	std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}

AMateria* AMateria::clone() const {
	return (AMateria*)this;
}