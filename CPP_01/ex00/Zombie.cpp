/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:29:16 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 15:00:51 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

std::string Zombie::getName() const{
    return name;
};

Zombie::~Zombie(){
    std::cout << "Zombie " << name << " has been destroyed." << std::endl;
}

void Zombie::announce() const{
    std::cout  << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
