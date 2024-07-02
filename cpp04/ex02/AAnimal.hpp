/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:12:15 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/29 14:24:16 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Brain;

class AAnimal{
	protected:
		std::string _type;
		Brain* _brain;
	public:
		AAnimal();
		AAnimal(AAnimal const &other);
		AAnimal &operator=(AAnimal const &other);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;

		Brain& getBrain() const;
};



#endif