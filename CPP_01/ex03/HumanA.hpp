/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:07:59 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/19 18:25:59 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
	private:
		std::string name;
		Weapon& weapon;
		HumanA();

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack() const;
};

#endif