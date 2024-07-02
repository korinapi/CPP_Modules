/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:42:50 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/28 12:55:23 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "- FragTrap -	" << _name << " created" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "- FragTrap -	" << _name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "- FragTrap -	" << _name << " says: 'High Five!'" << std::endl;
}