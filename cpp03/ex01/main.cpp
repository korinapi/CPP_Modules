/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:36:59 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/28 11:29:53 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");

    clap.attack("enemy");
    scav.attack("enemy");

    clap.takeDamage(10);
    scav.takeDamage(20);

    clap.beRepaired(3);
    scav.beRepaired(3);

    scav.guardGate();
    clap.attack("enemy");
    scav.attack("enemy");
    
    scav.guardGate();
    
    return 0;
}