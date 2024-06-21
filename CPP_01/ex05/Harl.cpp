/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:39:41 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/21 09:35:29 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	funcArray[DEBUG] = &Harl::debug;
    funcArray[INFO] = &Harl::info;
    funcArray[WARNING] = &Harl::warning;
    funcArray[ERROR] = &Harl::error;
}
Harl::~Harl(){
}

void Harl::complain(const std::string& level){
	Level lvl = getLevel(level);
	if (lvl != UNKNOWN){
		(this->*funcArray[lvl])();
	} else if (level != "exit"){
		std::cerr << "Invalid level" << std::endl;
	}
}

void Harl::debug() {
    LogLevel("I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!", "DEBUG");
}

void Harl::info() {
    LogLevel("I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!", "INFO");
}

void Harl::warning() {
    LogLevel("I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.", "WARNING");
}

void Harl::error() {
    LogLevel("This is unacceptable! I want to speak to the manager now.", "ERROR");
}

void Harl::LogLevel(const std::string& message, const std::string& level) {
	if (level == "ERROR" || level == "WARNING"){
		std::cerr << "[" << level << "] " << message << std::endl;
	} else {
		std::cout << "[" << level << "] " << message << std::endl;
	}
}

Harl::Level Harl::getLevel(const std::string& level){
	if (level == "DEBUG") return DEBUG;
	if (level == "INFO") return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR") return ERROR;
	return UNKNOWN;
}