/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:58:57 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/28 13:26:52 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string	_name; // this is DiamondTrap own name
		
	public:
		DiamondTrap(const std::string& name);
		~DiamondTrap();
		void	attack(const std::string& target);
		void	whoAmI();
};

#endif