/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 08:13:26 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 08:48:08 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::complain(const std::string& level){
	switchComplain(level);
}

void Harl::debug() {
    LogLevel("\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n", "DEBUG");
}

void Harl::info() {
    LogLevel("\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n", "INFO");
}

void Harl::warning() {
    LogLevel("\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n", "WARNING");
}

void Harl::error() {
    LogLevel("\nThis is unacceptable! I want to speak to the manager now.\n", "ERROR");
}

void Harl::LogLevel(const std::string& message, const std::string& level) {
		std::cout << "[" << level << "]" << message << std::endl;
}

Harl::logLevel Harl::getLogLevel(const std::string& level){
	if (level == "DEBUG") return DEBUG;
	if (level == "INFO") return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR") return ERROR;
	return UNKNOWN;
}

void Harl::switchComplain(const std::string& level){
	switch (getLogLevel(level)){
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}