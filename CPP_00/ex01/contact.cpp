/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:20:50 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/18 13:59:59 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

Contact::Contact(const std::string &firstName, const std::string &lastName, const std::string &nickname,
				 const std::string &phoneNumber, const std::string &darkestSecret)
	: firstName(firstName), lastName(lastName), nickname(nickname),
	  phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }
