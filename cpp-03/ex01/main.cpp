/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 23:18:38 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 11:59:43 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	{
		ClapTrap	clap("Jambo");
	
		clap.attack("Ugali");
		clap.takeDamage(5);
		clap.beRepaired(10);
		for (int i = 0; i < 9; i++) {
			clap.attack("Ugali");
		}
	}
	{
		ScavTrap	scav("Karibu");
	
		scav.attack("Ugali");
		scav.takeDamage(5);
		scav.beRepaired(10);
		for (int i = 0; i < 9; i++) {
			scav.attack("Ugali");
		}
		scav.guardGate();
		scav.takeDamage(105);
		scav.guardGate();
	}
}
