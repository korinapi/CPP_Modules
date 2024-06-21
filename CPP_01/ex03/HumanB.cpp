/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:11:46 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 18:29:03 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr){
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

void HumanB::attack() const{
	if (weapon != NULL && weapon->getType() != "")
		std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon to attack." << std::endl;
}
