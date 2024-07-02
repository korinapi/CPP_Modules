/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:17:42 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:42:18 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(Ice const &other);
		Ice &operator=(Ice const &other);
		~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};


#endif //ICE_HPP