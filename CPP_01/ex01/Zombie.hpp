/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:56:17 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 15:06:01 by cpuiu            ###   ########.fr       */
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
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void announce();
};
Zombie* zombieHorde( int N, std::string name );
#endif