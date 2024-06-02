/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:17:04 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/02 16:09:58 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}
	Contact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
			const std::string& phoneNumber, const std::string& darkestSecret)
		: firstName(firstName), lastName(lastName), nickname(nickname),
		  phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

	// Add getters for the new fields
	std::string getFirstName() const { return firstName; }
	std::string getLastName() const { return lastName; }
	std::string getNickname() const { return nickname; }
	std::string getPhoneNumber() const { return phoneNumber; }
	std::string getDarkestSecret() const { return darkestSecret; }
};

class PhoneBook {
private:
	Contact contacts[8];
	int oldestContactIndex;
	int currentContactIndex;

public:
	void addContact(const Contact& newContact) {
		contacts[oldestContactIndex] = newContact;
		oldestContactIndex = (oldestContactIndex + 1) % 8;
		if (currentContactIndex < 8) {
			currentContactIndex++;
		}
	}

	Contact getContact(int index) const {
		if (index < 0 || index >= currentContactIndex) {
			throw std::out_of_range("Index out of range");
		}
		return contacts[index];
	}

	void displayContacts() const {
		for (int i = 0; i < currentContactIndex; i++) {
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
			std::cout << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
			std::cout << std::setw(10) << truncate(contacts[i].getNickname()) << "\n";
		}
	}

private:
	std::string truncate(const std::string& str) const {
		if (str.length() > 10) {
			return str.substr(0, 9) + ".";
		}
		return str;
	}
};

int main() {
	PhoneBook phoneBook;
	std::string command;
	while (true) {
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "EXIT") {
			break;
		} else if (command == "ADD") {
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
		} else if (command == "SEARCH") {
			phoneBook.displayContacts();
			int index;
			std::cout << "Enter index: ";
			std::cin >> index;
			try {
				Contact contact = phoneBook.getContact(index);
				std::cout << "First name: " << contact.getFirstName() << "\n";
				std::cout << "Last name: " << contact.getLastName() << "\n";
				std::cout << "Nickname: " << contact.getNickname() << "\n";
				std::cout << "Phone number: " << contact.getPhoneNumber() << "\n";
				std::cout << "Darkest secret: " << contact.getDarkestSecret() << "\n";
			} catch (const std::out_of_range& e) {
				std::cout << "Invalid index\n";
			}
		}
	}
	return 0;
}
