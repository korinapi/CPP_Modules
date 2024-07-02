/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:11:33 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 16:45:12 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &src);

		
		std::string const &getType() const;				//Returns the materia type
		virtual AMateria* clone() const = 0;			//Returns a new instance of the Materia
		virtual void use(ICharacter &target);			//Abstract function that is implemented in derived classes
};

#endif //AMATERIA_HPP