/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:41:24 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 20:01:26 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
std::cout << a + b << std::endl;
std::cout << a - b << std::endl;
std::cout << a * b << std::endl;
std::cout << a / b << std::endl;
std::cout << a + Fixed( 5.05f ) << std::endl;
std::cout << a - Fixed( 5.05f ) << std::endl;
std::cout << a * Fixed( 5.05f ) << std::endl;
std::cout << a / Fixed( 5.05f ) << std::endl;
std::cout << Fixed( 5.05f ) + b << std::endl;
std::cout << Fixed( 5.05f ) - b << std::endl;
std::cout << Fixed( 5.05f ) * b << std::endl;
std::cout << Fixed( 5.05f ) / b << std::endl;
std::cout << Fixed( 5.05f ) + Fixed( 5.05f ) << std::endl;
std::cout << Fixed( 5.05f ) - Fixed( 5.05f ) << std::endl;
std::cout << Fixed( 5.05f ) * Fixed( 5.05f ) << std::endl;
//std::cout << Fixed( 5.05f ) / 0 << std::endl;
return 0;
}