/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 08:17:06 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 08:18:50 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	
	Harl harl;
	std::string level;
	if (argc != 2){
		return (std::cout << "Usage: ./harlFilter \"level\"\n", EXIT_FAILURE);
	}
	level = argv[1];
	harl.complain(level);
	return 0;
}