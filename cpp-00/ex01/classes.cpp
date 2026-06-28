/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:13:10 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/28 15:59:15 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	fname = "";
	lname = "";
	nname = "";
	phone = "";
	secret = "";
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
	while (i < 8 && _contacts[i].fname != "") {
		i++;
	}
	return (i);
}

void	Phonebook::add()
{
	int i = length();
	if (i == 8) {
		std::cout << RED << "Phonebook is full. Cannot add more contacts." << RST << std::endl;
		return ;
	}
	Contact& contact = get_contact(i);
	contact.fname = get_input("First name:");
	contact.lname = get_input("Last name:");
	contact.nname = get_input("Nickname:");
	contact.phone = get_input("Phone number:");
	contact.secret = get_input("Darkest secret:");
	std::cout << contact << std::endl;
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
	return ;
}