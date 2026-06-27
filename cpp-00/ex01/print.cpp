/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 00:52:27 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/27 01:59:55 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void print_field(std::string field, bool is_last)
{
	if (field.length() > 10)
		std::cout << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << field;
	if (!is_last)
		std::cout << "|";
	else
		std::cout << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Contact& contact)
{
	print_field(std::to_string(contact.get_idx()));
	print_field(contact.fname);
	print_field(contact.lname);
	print_field(contact.nname, true);
	return os;
}