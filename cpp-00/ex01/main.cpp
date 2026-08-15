/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:12:40 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 16:39:28 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool get_input(std::string prompt, std::string &str, bool accept_empty)
{ 
	std::cout << BLU;
	if (prompt.length()) std::cout << prompt << std::endl << RST;
	if (!std::getline(std::cin, str)) return (false);
	str = trim(str);
	if (to_upper(str) == "EXIT") return (false);
	if (!accept_empty) {
		while (str == "") {
			std::cout << RED << "Please enter a valid string.\n" << RST;
			if (prompt.length()) std::cout << BLU << prompt << std::endl << RST;
			std::getline(std::cin, str);
			str = trim(str);
			if (to_upper(str) == "EXIT") return (false);
		}
	}
	return (true);
}

int main(void) {
	std::string user_input;
	if (!get_input("(ADD/SEARCH/EXIT)", user_input, true))
		return (0);
	Phonebook	book;
	while (true)
	{
		user_input = to_upper(user_input);
		if (user_input == "ADD") {
			if (!book.add()) return (0);
		}
		else if (user_input == "SEARCH") {
			if (!book.search()) return (0);
		}
		if (!get_input("(ADD/SEARCH/EXIT)", user_input, true))
			return (0);
	}
	return 0;
}
