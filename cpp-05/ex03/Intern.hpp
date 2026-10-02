/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:02:05 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/02 18:48:30 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <map>
# include "AForm.hpp"
# include <iostream>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

#endif


class Intern {
	public:
		Intern();
		Intern(const Intern&);
		~Intern();
		Intern& operator=(const Intern&);
		AForm* makeForm(const std::string& form, const std::string& target) const;
	private:
		std::map<std::string, AForm *> _forms;
};