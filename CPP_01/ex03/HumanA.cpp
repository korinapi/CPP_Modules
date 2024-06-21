/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:10:40 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 18:32:54 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
}

HumanA::~HumanA(){
}

void HumanA::attack() const{
	if (weapon.getType() != "")
		std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon to attack." << std::endl;
}
