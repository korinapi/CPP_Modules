/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:03:53 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 17:09:55 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int value;
		static const int fractionalBits = 8;

	public:
		Fixed();  								//default constructor
		~Fixed();								//destructor
		Fixed(const Fixed &copy);				//copy constructor
		Fixed &operator=(const Fixed &other);	//assignation operator

		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif