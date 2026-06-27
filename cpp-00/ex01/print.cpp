/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 00:52:27 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/27 11:08:18 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void print_field(std::ostream& os, std::string field, bool is_last = false)
{
	if (field.length() > 10)
		os << field.substr(0, 9) << ".";
	else
		os << std::setw(10) << field;
	if (!is_last)
		os << "|";
	else
		os << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Phonebook& phonebook)
{
	for (int i = 0; i < phonebook.length(); i++) {
		const Contact& contact = phonebook.get_contact(i);
		print_field(os, std::to_string(i));
		print_field(os, contact.fname);
		print_field(os, contact.lname);
		print_field(os, contact.nname, true);
	}
	return os;
}

std::ostream& operator<<(std::ostream& os, const Contact& contact) {
	os << "First name: " << contact.fname << std::endl;
	os << "Last name: " << contact.lname << std::endl;
	os << "Nickname: " << contact.nname << std::endl;
	os << "Phone number: " << contact.phone << std::endl;
	os << "Darkest secret: " << contact.secret << std::endl;
	return os;
}