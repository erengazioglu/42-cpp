/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:13:10 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/27 01:59:30 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	_idx = -1;
	fname = "";
	lname = "";
	nname = "";
	phone = "";
	secret = "";
}

void	Contact::set_idx(int i)
{
	_idx = i;
}

int		Contact::get_idx() const
{
	return _idx;
}

Contact&	Phonebook::get_contact(int i)
{
	return _contacts[i];
}

void	Phonebook::add(int i)
{
	Contact& contact = get_contact(i);
	contact.set_idx(i);
	contact.fname = get_input("First name:", false);
	contact.lname = get_input("Last name:", false);
	contact.nname = get_input("Nickname:", false);
	contact.phone = get_input("Phone number:", false);
	contact.secret = get_input("Darkest secret:", false);
	std::cout << contact << std::endl;
}

void	Phonebook::search()
{
	return ;
}