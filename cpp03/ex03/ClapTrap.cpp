/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:29:18 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/28 13:09:05 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "[ ClapTrap ]	" << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "[ ClapTrap ]	" << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (_energyPoints == 0 || _hitPoints == 0){
		std::cout << "[ ClapTrap ]	" << _name << " is out of energy or already defeated!" << std::endl;
		return;
	}
	std::cout << "[ ClapTrap ]	" << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints == 0){
		std::cout << "[ ClapTrap ]	" << _name << " is already dead!" << std::endl;
		return;
	}
	else if (amount >= _hitPoints){
		_hitPoints = 0;
		std::cout << "[ ClapTrap ]	" << _name << " takes " << amount << " points of damage and is defeated!" << std::endl;
	}
	else{
		_hitPoints -= amount;
		std::cout << "[ ClapTrap ]	" << _name << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoints == 0){
		std::cout << "[ ClapTrap ]	" << _name << " is defeated and cannot be repaired!" << std::endl;
		return;
	} else{
		_hitPoints += amount;
		std::cout << "[ ClapTrap ]	" << _name << " is repaired for " << amount << " points!" << std::endl;
	}
}
