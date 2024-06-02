/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:22:29 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/02 15:17:26 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <iostream>
	#include <string>
	#include <cctype>

	int main(int argc, char* argv[]) {
		if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		else
		{
			for (int i = 1; i < argc; i++) {
			std::string arg = argv[i];
			for (std::string::size_type j = 0; j < arg.length(); j++) {
				arg[j] = std::toupper(static_cast<unsigned char>(arg[j]));
			}
			std::cout << arg << " ";
			}
		}
		std::cout << std::endl;
		return 0;
	}