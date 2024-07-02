/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:07:12 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:35:46 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria *_materia[4];
	public:
		Character(std::string const &name);
		Character(Character const &src);
		// Character(Character const &other);
		Character &operator=(Character const &other);
		~Character();
	

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif //CHARACTER_HPP