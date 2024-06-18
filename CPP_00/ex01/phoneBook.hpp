/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpuiu <cpuiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:17:22 by cpuiu             #+#    #+#             */
/*   Updated: 2024/06/18 13:32:32 by cpuiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <array>
# include <string>
# include <iostream>
# include <iomanip>

class Contact {
public:
	Contact();
	Contact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
			const std::string& phoneNumber, const std::string& darkestSecret);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook {
private:
    Contact contacts[8];
    int oldestContactIndex;
    int currentContactIndex;

public:
    PhoneBook();

    void addContact(const Contact& newContact);
    Contact getContact(int index) const;
    void displayContacts() const;

private:
    std::string truncate(const std::string& str) const;
};



#endif