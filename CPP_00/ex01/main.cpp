/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:17:04 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/18 14:01:11 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;
	while (true)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
			std::cout << "Enter first name: ";
			std::cin >> firstName;
			std::cout << "Enter last name: ";
			std::cin >> lastName;
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			std::cout << "Enter phone number: ";
			std::cin >> phoneNumber;
			std::cout << "Enter darkest secret: ";
			std::cin >> darkestSecret;
			phoneBook.addContact(Contact(firstName, lastName, nickname, phoneNumber, darkestSecret));
		}
		else if (command == "SEARCH")
		{
			phoneBook.displayContacts();
			int index;
			std::cout << "Enter index: ";
			std::cin >> index;
			try
			{
				Contact contact = phoneBook.getContact(index);
				std::cout << "First name: " << contact.getFirstName() << "\n";
				std::cout << "Last name: " << contact.getLastName() << "\n";
				std::cout << "Nickname: " << contact.getNickname() << "\n";
				std::cout << "Phone number: " << contact.getPhoneNumber() << "\n";
				std::cout << "Darkest secret: " << contact.getDarkestSecret() << "\n";
			}
			catch (const std::out_of_range &e)
			{
				std::cout << "Invalid index\n";
			}
		}
	}
	return 0;
}
