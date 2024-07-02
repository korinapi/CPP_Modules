/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:37:44 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 14:22:38 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "AAnimal.hpp"
class Brain{
	private:
		std::string ideas[100];
	
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);

		void setIdea(int i, std::string idea);
		void printIdeas() const;
};

#endif