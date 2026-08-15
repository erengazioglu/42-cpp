/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:35:00 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 16:41:58 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <sstream>
# include <iomanip>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

struct Fields {
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string secret;
};

class Contact {
	public:
		Contact();
		Contact(struct Fields fields);
		struct Fields get_fields(void) const;
	private:
		std::string _fname;
		std::string _lname;
		std::string _nname;
		std::string _phone;
		std::string _secret;
};

class Phonebook {
	public:
		Contact& get_contact(int i);
		const Contact& get_contact(int i) const;
		bool	add(void);
		bool	search(void);
		int		length(void)	const;
	private:
		Contact _contacts[8];
};

std::string	build_prompt(Phonebook& phonebook);
std::ostream& operator<<(std::ostream& os, const Contact& contact);
std::ostream& operator<<(std::ostream& os, const Phonebook& phonebook);
bool get_input(std::string prompt, std::string &str, bool accept_empty = false);
std::string	trim(std::string str);
std::string to_upper(std::string str);
void print_field(std::string field, bool is_last = false);

#endif