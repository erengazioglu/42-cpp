/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 23:18:38 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/02 17:54:07 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap	a("Jambo");
	ClapTrap	b;

	a.attack("Ugali");
	a.takeDamage(5);
	a.beRepaired(10);
	b = a;
	std::cout << "b._hp = " << b.get_hp() << std::endl;
	for (int i = 0; i < 9; i++) {
		a.attack("Ugali");
	}
}
