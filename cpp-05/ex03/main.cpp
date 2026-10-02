/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/02 19:18:56 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(NULL));
	Bureaucrat low("Tanaka", 150);
	Bureaucrat high("Pompy", 1);
	Intern nameless;

	try {
		AForm* robo = nameless.makeForm("Robotomy Request", "Yikes");
		AForm* pres = nameless.makeForm("Presidential Pardon", "Huh");
		AForm* shrub = nameless.makeForm("Shrubbery Creation", "Lumbridge");
		
		for (int i = 0; i < 10; i++)
			high.executeForm(*robo);
		low.executeForm(*robo);
		high.executeForm(*pres);
		low.executeForm(*pres);
		high.executeForm(*shrub);
		low.executeForm(*shrub);

		delete robo;
		delete pres;
		delete shrub;

		return 0;
	} catch (std::exception& e) {
		std::cerr << RED << e.what() << "\n" << RST;
		return 1;
	}
}
