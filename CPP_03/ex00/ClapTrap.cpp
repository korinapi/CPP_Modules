/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:29:18 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/22 16:53:28 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}
void ClapTrap::attack(const std::string &target){
	if (!canPerformAction()){
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	loseEnergy();
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints == 0){
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
		return;
	}
	else if (amount >= hitPoints){
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is defeated!" << std::endl;
	}
	else{
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hitPoints == 0){
		std::cout << "ClapTrap " << name << " is defeated and cannot be repaired!" << std::endl;
		return;
	} else{
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " points!" << std::endl;
	}
}

void ClapTrap::loseEnergy(){
	if (energyPoints < energyCost){
		energyPoints = 0;
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
	}
	else
		energyPoints -= energyCost;
}

bool ClapTrap::canPerformAction() const{
	if (energyPoints < energyCost){
		return false;
	}
	return true;
}

void ClapTrap::recoverEnergy(){
	if (energyPoints == maxEnergyPoints){
		std::cout << "ClapTrap " << name << " is already at full energy!" << std::endl;
		return;
	}
	energyPoints = maxEnergyPoints;
	std::cout << "ClapTrap " << name << " recovers all energy!" << std::endl;
}