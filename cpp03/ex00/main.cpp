/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:36:59 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/22 17:01:07 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(){
    ClapTrap clap("MickeyMouse");

	clap.attack("Villain");
    clap.takeDamage(5);
	clap.beRepaired(5);
    clap.takeDamage(10); // This should defeat the ClapTrap
    clap.beRepaired(3);  // This should not repair a defeated ClapTrap

    return 0;
}