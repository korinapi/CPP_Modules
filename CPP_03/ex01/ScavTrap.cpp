/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:13:20 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/22 18:19:51 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	std::cout << "ScavTrap constructor called" << std::endl;
	// this->hitPoints = 100;
	// this->energyPoints = 50;
	// this->attackDamage = 20;
}
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << "destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if(!canPerformAction()){
		std::cout << "ScavTrap " << this->name << " cannot attack because it has no energy" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}