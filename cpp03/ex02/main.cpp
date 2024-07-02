/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:36:59 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/28 12:53:39 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavvy");
    FragTrap frag("Fraggy");

    clap.attack("enemy");
    scav.attack("enemy");
    frag.attack("enemy");

    clap.takeDamage(10);
    scav.takeDamage(20);
    frag.takeDamage(30);

    clap.beRepaired(3);
    scav.beRepaired(3);
    frag.beRepaired(3);

    scav.guardGate();
    clap.attack("enemy");
    scav.attack("enemy");
    frag.attack("enemy");
    
    frag.highFivesGuys();    
    scav.guardGate();
    
    return 0;
}