/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:48:24 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 13:44:20 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal* animals[2] = { new Dog(),  new Cat() };
    for ( int i = 0; i < 2; i++ ) {
        delete animals[i];
    }

    return 0;
}

// int main() {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
    
//     std::cout << "--- Example 1 ---" << std::endl;
//     j->makeSound(); 
//     i->makeSound();

//     delete j;
//     delete i;

//     std::cout << std::endl;

//     const WrongAnimal* wa = new WrongCat();
    
//     std::cout << "--- Example 2 ---" << std::endl;
//     wa->makeSound();

//     delete wa;

//     std::cout << std::endl;


//     const int numAnimals = 6;
//     Animal* animals[numAnimals];

//     std::cout << "--- Example 3 ---" << std::endl;
//     for (int i = 0; i < numAnimals; ++i) {
//         if (i < numAnimals / 2) {
//             animals[i] = new Dog();
//         } else {
//             animals[i] = new Cat();
//         }
//     }
//     for (int i = 0; i < numAnimals; ++i) {
//         animals[i]->makeSound();
//     }
//     for (int i = 0; i < numAnimals; ++i) {
//         delete animals[i];
//     }
//     std::cout << std::endl;

  
//     std::cout << "--- Example 4 ---" << std::endl;
//     Dog dog1;
//     dog1.makeSound();
//     Dog dog2 = dog1;
//     dog2.makeSound();
//     dog2.getBrain().printIdeas();
//     std::cout << std::endl;


//     std::cout << "--- Example 5 ---" << std::endl;
//     Cat cat1;
//     cat1.makeSound();
//     Cat cat2 = cat1;
//     cat2.makeSound();
//     cat2.getBrain().printIdeas();

//     return 0;
// }

// int main() {
//     Dog dog;
//     dog.makeSound();

//     Brain& dogBrain = dog.getBrain();
//     dogBrain.printIdeas();

//     dogBrain.setIdea(0, "New idea");
//     dogBrain.printIdeas();

//     return 0;
// }
