/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:30:35 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 14:41:10 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>



class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    std::string getName() const;
    void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif