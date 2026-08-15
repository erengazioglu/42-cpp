/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 00:52:27 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 16:33:25 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	build_prompt(Phonebook& phonebook) {
	int len = phonebook.length();
	if (len == 1) return "(0)";
	std::ostringstream oss;
	oss << "(0-" << len - 1 << ")";
	return oss.str();
}

void print_field(std::ostream& os, std::string field, bool is_last = false)
{
	if (field.length() > 10)
		os << field.substr(0, 9) << ".";
	else
		os << std::setw(10) << field;
	if (!is_last)
		os << BLU << "|" << RST;
	else
		os << std::endl;
}
void print_field(std::ostream& os, int idx, bool is_last = false)
{
	os << std::setw(10) << idx;
	if (!is_last)
		os << BLU << "|" << RST;
	else
		os << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Phonebook& phonebook)
{
	for (int i = 0; i < phonebook.length(); i++) {
		struct Fields fields = phonebook.get_contact(i).get_fields();
		print_field(os, i);
		print_field(os, fields.fname);
		print_field(os, fields.lname);
		print_field(os, fields.nname, true);
	}
	return os;
}

std::ostream& operator<<(std::ostream& os, const Contact& contact) {
	struct Fields fields = contact.get_fields();
	os << "First name: " << fields.fname << std::endl;
	os << "Last name: " << fields.lname << std::endl;
	os << "Nickname: " << fields.nname << std::endl;
	os << "Phone number: " << fields.phone << std::endl;
	os << "Darkest secret: " << fields.secret << std::endl;
	return os;
}
