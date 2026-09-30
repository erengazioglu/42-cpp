/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/30 16:12:00 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(NULL));
	Bureaucrat low("Tanaka", 150);
	Bureaucrat high("Pompy", 1);
	RobotomyRequestForm robo("Mibombo");
	PresidentialPardonForm pres("Mibombo");


	for (int i = 0; i < 10; i++)
		high.executeForm(robo);
	low.executeForm(robo);
	high.executeForm(pres);
	low.executeForm(pres);

	return 0;
}
