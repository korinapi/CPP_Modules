/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:19:17 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:40:17 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure( Cure const &other);
		Cure &operator=(Cure const &other);
		~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);
};



#endif