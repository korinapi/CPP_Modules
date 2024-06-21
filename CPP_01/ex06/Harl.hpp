/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 08:13:44 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 08:50:22 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
	public:
		Harl();
		~Harl();
		void complain(const std::string& level);
	private:
		void debug();
		void info();
		void warning();
		void error();
		void LogLevel(const std::string& message, const std::string& level);

		void switchComplain(const std::string& level);


		enum logLevel{
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			UNKNOWN
		};
		logLevel getLogLevel(const std::string& level);
};


#endif