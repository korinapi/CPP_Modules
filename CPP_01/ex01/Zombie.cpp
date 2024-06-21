/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:56:21 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 15:11:22 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::setName(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
    std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}

void Zombie::announce(){
    std::cout  << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}