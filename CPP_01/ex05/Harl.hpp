/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:39:47 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 09:32:38 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class Harl{
	public:
		enum Level {
        DEBUG,
        INFO,
        WARNING,
        ERROR,
        UNKNOWN,
        NUM_LEVELS
    };
		Harl();
		~Harl();
		void complain(const std::string& level);
		void LogLevel(const std::string& message, const std::string& level);
		
	private:
		void debug();
		void info();
		void warning();
		void error();
		
		typedef void (Harl::*FuncPtr)();
		FuncPtr funcArray[NUM_LEVELS];
		Level getLevel(const std::string& level);

};



#endif