/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:21:42 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 18:36:41 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "HumanA.hpp"
// #include "HumanB.hpp"

// int main()
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// 	return 0;
// }

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

	Weapon club("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();

	club.setType("some other type of club");
	bob.attack();

	Weapon sword("sharp sword");

	HumanB jim("Jim");

	jim.setWeapon(sword);
	jim.attack();

	sword.setType("dull sword");
	jim.attack();

	Weapon axe("mighty axe");
	Weapon dagger("swift dagger");

	HumanA alice("Alice", axe);
	HumanB charlie("Charlie");

	alice.attack();
	charlie.attack();

	charlie.setWeapon(dagger);
	charlie.attack();

	axe.setType("rusty axe");
	alice.attack();

	HumanB dave("Dave");
	dave.attack();

	return 0;
}
