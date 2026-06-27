/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:35:00 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/27 02:02:42 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>
# include <iomanip>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

std::string get_input(std::string prompt, bool accept_empty);

class Contact {
	public:
		Contact();
		int		get_idx(void)		const;
		void	set_idx(int i);
		std::string fname;
		std::string lname;
		std::string nname;
		std::string phone;
		std::string secret;
		void    print_full(void)	const;
	private:
		int         _idx;
};

class Phonebook {
	public:
		Contact& get_contact(int i);
		void    add(int i);
		void    search(void);
	private:
		Contact _contacts[8];
};

std::ostream& operator<<(std::ostream& os, const Contact& contact);
std::ostream& operator<<(std::ostream& os, const Phonebook& phonebook);
void print_field(std::string field, bool is_last = false);

#endif