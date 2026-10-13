/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/13 16:02:31 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(NULL));
	Bureaucrat low("Tanaka", 130);
	Bureaucrat high("Pompy", 1);
	RobotomyRequestForm robo("Mibombo");
	PresidentialPardonForm pres("Mibombo");
	ShrubberyCreationForm shrub("Mibombo");

	std::cout << "---\nTest executing unsigned forms:\n";
	low.executeForm(robo);
	low.executeForm(pres);
	low.executeForm(shrub);

	std::cout << "\n---\nTest signing forms:\n";
	low.signForm(robo);
	low.signForm(pres);
	low.signForm(shrub);
	high.signForm(robo);
	high.signForm(pres);
	high.signForm(shrub);

	std::cout << "\n---\nTest robotomy (50\% chance):\n";
	low.executeForm(robo);
	for (int i = 0; i < 10; i++)
		high.executeForm(robo);

	std::cout << "\n---\nTest executing other forms:\n";
	high.executeForm(pres);
	low.executeForm(pres);
	high.executeForm(shrub);
	low.executeForm(shrub);

	return 0;
}
