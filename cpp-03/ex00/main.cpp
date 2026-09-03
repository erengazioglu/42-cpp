/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 23:18:38 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 16:08:51 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap	clap_a("Jambo");
	ClapTrap	clap_b;

	clap_a.attack("Ugali");
	clap_a.takeDamage(5);
	clap_a.beRepaired(10);
	clap_b = clap_a;
	std::cout << "clap_b._ep = " << clap_b.get_ep() << std::endl;
	for (int i = 0; i < 9; i++) {
		clap_b.attack("Ugali");
	}
	std::cout << "clap_a._ep = " << clap_a.get_ep() << std::endl;
}
