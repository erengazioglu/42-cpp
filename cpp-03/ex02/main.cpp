/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 23:18:38 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 15:53:29 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap	a("Jambo");

	a.attack("Ugali");
	a.takeDamage(5);
	a.beRepaired(10);
	for (int i = 0; i < 9; i++) {
		a.attack("Ugali");
	}
	a.guardGate();
	a.highFivesGuys();
}
