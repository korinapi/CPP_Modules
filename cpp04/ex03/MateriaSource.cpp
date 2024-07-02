/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:44:42 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:51:45 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for(int i = 0; i < 4; ++i){
		this->_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const & src) {
	if (this != &src) {
		for(int i = 0; i < 4; ++i){
			if (this->_materia[i])
				delete this->_materia[i];
			if (src._materia[i])
				this->_materia[i] = src._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for(int i = 0; i < 4; ++i){
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

AMateria* MateriaSource::getMateria(std::string const & type) {
	for(int i = 0; i < 4; ++i){
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return this->_materia[i];
	}
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m) {
	for(int i = 0; i < 4; ++i){
		if (!this->_materia[i]) {
			this->_materia[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for(int i = 0; i < 4; ++i){
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}