/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:28:37 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/18 13:35:00 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook() : oldestContactIndex(0), currentContactIndex(0) {}

void PhoneBook::addContact(const Contact& newContact) {
    contacts[oldestContactIndex] = newContact;
    oldestContactIndex = (oldestContactIndex + 1) % 8;
    if (currentContactIndex < 8) {
        currentContactIndex++;
    }
}

Contact PhoneBook::getContact(int index) const {
    if (index < 0 || index >= currentContactIndex) {
        throw std::out_of_range("Index out of range");
    }
    return contacts[index];
}

void PhoneBook::displayContacts() const {
    for (int i = 0; i < currentContactIndex; i++) {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(contacts[i].getNickname()) << "|\n";
    }
}

std::string PhoneBook::truncate(const std::string& str) const {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}
