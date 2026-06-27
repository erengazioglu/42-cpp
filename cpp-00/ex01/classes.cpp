/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:13:10 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/27 11:06:04 by egaziogl         ###   ########.fr       */
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
	contact.fname = get_input("First name:", false);
	contact.lname = get_input("Last name:", false);
	contact.nname = get_input("Nickname:", false);
	contact.phone = get_input("Phone number:", false);
	contact.secret = get_input("Darkest secret:", false);
	std::cout << contact << std::endl;
}

void	Phonebook::search()
{
	std::cout << *this;
	return ;
}