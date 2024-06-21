/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:01:05 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 15:13:05 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#define N 20
int main()
{
	Zombie *zombi = zombieHorde(N, "Zed the undying");

	for (size_t i = 0; i < N; i++)
	{
		std::cout << i << ":";
		zombi[i].announce();
	}
	std::cout << "------------------------------------" << std::endl;
	delete[] zombi;
	return (0);
}