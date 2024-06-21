/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:50:28 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/20 21:12:41 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string level;
	do
	{
		std::cout << "Enter log level (DEBUG, INFO, WARNING, ERROR, or exit to quit): ";
		std::cin >> level;
		harl.complain(level);
	} while (level != "exit");
	return 0;
}
