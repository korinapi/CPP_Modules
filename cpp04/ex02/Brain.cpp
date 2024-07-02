/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:37:36 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 12:14:45 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[ Brain ]	constructor called" << std::endl;
	for(int i = 0; i < 100; i++){
		std::stringstream ss;
		ss << "Idea #" << i;
		ideas[i] = ss.str();
	}
}

Brain::Brain(const Brain &other) {
	std::cout << "[ Brain ]	copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other) {
	if (this != &other) {
		for(int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	std::cout << "[ Brain ]	copy assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "[ Brain ]	destructor called" << std::endl;
}

void Brain::setIdea(int i, std::string idea) {
	ideas[i] = idea;
}

void Brain::printIdeas() const {
	for(int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
}