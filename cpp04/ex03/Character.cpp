/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:09:09 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:59:12 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string const &name) : _name(name){
	for(int i = 0; i < 4; ++i){
		this->_materia[i] = NULL;
	}
}

Character::Character(Character const & src) : _name(src._name){
	*this = src;

}


Character &Character::operator=(Character const &other) {
	if (this != &other) {
		_name = other._name;
		for(int i = 0; i < 4; ++i){
			if (_materia[i])
				delete _materia[i];
			if (other._materia[i])
				_materia[i] = other._materia[i]->clone();
			else
				_materia[i] = NULL;
		}
	}
	return *this;
}

Character::~Character() {
	for(int i = 0; i < 4; ++i){
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for(int i = 0; i < 4; ++i){
		if (!this->_materia[i]){
			this->_materia[i] = m;
			// std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "Character " << this->_name << " can't equip " << m->getType() << std::endl;
}

void Character::unequip(int idx) {
	if (this->_materia[idx]){
		delete this->_materia[idx];
		this->_materia[idx] = NULL;
		// std::cout << "Character " << this->_name << " unequipped" << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (this->_materia[idx]){
		this->_materia[idx]->use(target);
		// std::cout << "Character " << this->_name << " uses " << this->_materia[idx]->getType() << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't use" << std::endl;
}