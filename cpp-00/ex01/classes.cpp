/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:13:10 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/14 20:24:37 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	_fname = "";
	_lname = "";
	_nname = "";
	_phone = "";
	_secret = "";
}

Contact&	Phonebook::get_contact(int i)
{
	return _contacts[i];
}

const Contact&	Phonebook::get_contact(int i) const
{
	return _contacts[i];
}

int		Phonebook::length() const {
	int i = 0;
	while (i < 8 && _contacts[i].get_fname() != "") {
		i++;
	}
	return (i);
}

void	Phonebook::add()
{
	int i = length();
	std::string fields[5];
	if (i == 8) {
		std::cout << RED << "Phonebook is full. Cannot add more contacts." << RST << std::endl;
		return ;
	}
	Contact& contact = get_contact(i);
	fields[0] = get_input("First name:");
	fields[1] = get_input("Last name:");
	fields[2] = get_input("Nickname:");
	fields[3] = get_input("Phone number:");
	fields[4] = get_input("Darkest secret:");
	contact = Contact(fields[0], fields[1], fields[2], fields[3], fields[4]);
	std::cout << GRN << "Contact added successfully.\n" << RST;
}

void	Phonebook::search()
{
	int len = length();
	if (len == 0) {
		std::cout << RED << "Phonebook is empty. Please add some contacts first." \
			<< RST << std::endl;
		return ;
	}
	std::cout << *this;
	std::string prompt = build_prompt(*this);
	std::string user_input = get_input(prompt);
	int i = user_input[0] - '0';
	while (user_input.length() != 1 || i < 0 || i >= len) {
		std::cout << RED << "Please enter a valid index." << RST << std::endl;
		user_input = get_input(prompt);
		i = user_input[0] - '0';
	}
	std::cout << get_contact(i);
}
