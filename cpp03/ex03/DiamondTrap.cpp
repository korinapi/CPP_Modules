/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:59:12 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/28 13:29:00 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
						FragTrap(name), ScavTrap(name), _name(name)	{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "# DiamondTrap #	" << _name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "# DiamondTrap #	" << _name << " destroyed" << std::endl;
}

void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
std::cout << "* DiamondTrap * " << "My name is " << _name
              << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}