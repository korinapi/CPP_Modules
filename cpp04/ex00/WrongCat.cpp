/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:28:47 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 10:34:29 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "[ WrongCat ]	constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "[ WrongCat ]	destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat sound" << std::endl;
}