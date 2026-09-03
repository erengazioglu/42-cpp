/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 23:18:38 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 16:15:58 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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
	}
	{
		FragTrap	frag("Nzuri");
	
		frag.attack("Ugali");
		frag.takeDamage(5);
		frag.beRepaired(10);
		for (int i = 0; i < 9; i++) {
			frag.attack("Ugali");
		}
		frag.highFivesGuys();
	}
	{
		DiamondTrap	diamond("Asante");

		diamond.attack("Ugali");
		diamond.takeDamage(5);
		diamond.beRepaired(10);
		for (int i = 0; i < 9; i++) {
			diamond.attack("Ugali");
		}
		diamond.guardGate();
		diamond.highFivesGuys();
	}
}
