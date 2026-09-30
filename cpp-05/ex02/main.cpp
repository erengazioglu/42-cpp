/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/30 16:10:15 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(NULL));
	Bureaucrat low("Tanaka", 150);
	Bureaucrat high("Pompy", 1);
	RobotomyRequestForm f("Mibombo");

	for (int i = 0; i < 10; i++)
		high.executeForm(f);
	low.executeForm(f);

	return 0;
}
