/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:48:24 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 10:38:01 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main() {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
    
//     i->makeSound(); // will output the cat sound
//     j->makeSound(); // will output the dog sound
//     meta->makeSound(); // will output the animal sound

//     delete meta;
//     delete j;
//     delete i;

//     return 0;
// }



int main() {
     Animal* animals[4];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int i = 0; i < 4; ++i) {
        if (dynamic_cast<Dog*>(animals[i])) {
            std::cout << "Dog sound: ";
        } else if (dynamic_cast<Cat*>(animals[i])) {
            std::cout << "Cat sound: ";
        }
        animals[i]->makeSound();
    }

    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }

	std::cout << "-------------------------------------" << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound(); // will output the cat sound
	wrong_meta->makeSound(); // will output the animal sound

	delete wrong_meta;
	delete wrong_cat;

    return 0;
}
