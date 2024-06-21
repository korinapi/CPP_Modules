/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:40:57 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 14:51:58 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::string name;

    std::cout << "Welcome to the Zombie Apocalypse!" << std::endl;
    std::cout << "Enter the name of your first zombie: " << std::flush;
    std::cin >> name;

    Zombie zombi1(name);
    std::cout << "Your first zombie, " << zombi1.getName() << ", has been created!" << std::endl;
    zombi1.announce();
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Enter the name of your second zombie: " << std::flush;
    std::cin >> name;

    Zombie *zombi2 = newZombie(name);
    std::cout << "Your second zombie, " << zombi2->getName() << ", has been created on the heap!" << std::endl;
    zombi2->announce();
    delete zombi2;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Calling randomChump() to summon a random zombie!" << std::endl;
    randomChump("Zed the Undying");
    return 0;
}