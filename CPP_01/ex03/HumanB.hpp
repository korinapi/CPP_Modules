/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:12:10 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 18:27:46 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon*     weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void    attack() const;
		void    setWeapon(Weapon& weapon);
};

#endif