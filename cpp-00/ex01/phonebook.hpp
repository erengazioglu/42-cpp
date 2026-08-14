/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:35:00 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/14 20:24:16 by egaziogl         ###   ########.fr       */
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

class Contact {
	public:
		Contact();
		Contact(
			std::string fname, std::string lname, std::string nname,
			std::string phone, std::string secret
		);
		std::string get_fname(void) const;
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
		void	add(void);
		void	search(void);
		int		length(void)	const;
	private:
		Contact _contacts[8];
};

std::string	build_prompt(Phonebook& phonebook);
std::ostream& operator<<(std::ostream& os, const Contact& contact);
std::ostream& operator<<(std::ostream& os, const Phonebook& phonebook);
std::string get_input(std::string prompt, bool accept_empty = false);
void print_field(std::string field, bool is_last = false);

#endif