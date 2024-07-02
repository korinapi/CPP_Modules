/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:13:20 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/28 11:28:02 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "* ScavTrap *	" << _name << " created" << std::endl;
}
ScavTrap::~ScavTrap(){
	std::cout << "* ScavTrap *	" << _name << " destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if(this->_energyPoints <= 0){
		std::cout << "* ScavTrap *	" << _name << " cannot attack because it has no energy" << std::endl;
		return;
	}
	std::cout << "* ScavTrap *	" << _name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ScavTrap::guardGate(){
	std::cout << "* ScavTrap *	" << _name << " has entered Gate Keeper mode" << std::endl;
}