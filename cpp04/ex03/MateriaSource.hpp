/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:44:49 by cpuiu             #+#    #+#             */
/*   Updated: 2024/07/02 17:48:24 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria *_materia[4];
		// int count;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		MateriaSource &operator=(MateriaSource const &other);
		~MateriaSource();

		void learnMateria(AMateria *m);
		AMateria* getMateria(std::string const &type);
		AMateria* createMateria(std::string const &type);
};



#endif //MATERIASOURCE_HPP