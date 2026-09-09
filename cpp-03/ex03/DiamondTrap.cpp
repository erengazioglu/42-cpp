/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 16:00:06 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 13:27:51 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(
		"untitled_clap_name",
		FragTrap::default_hp, 
		ScavTrap::default_ep,
		FragTrap::default_dmg
	), _name("untitled") {
	std::cout << BLU << "DiamondTrap | Default constructor\n" << RST;
	_class_name = "DiamondTrap";
	_hp = FragTrap::get_hp();
	_ep = ScavTrap::get_ep();
	_dmg = FragTrap::get_dmg();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(
		name + "_clap_name", 
		FragTrap::default_hp, 
		ScavTrap::default_ep,
		FragTrap::default_dmg
	), _name(name) {
	std::cout << BLU << "DiamondTrap | Custom constructor\n" << RST;
	_class_name = "DiamondTrap";
	_hp = FragTrap::get_hp();
	_ep = ScavTrap::get_ep();
	_dmg = FragTrap::get_dmg();
}

DiamondTrap::~DiamondTrap() {
	std::cout << RED << "DiamondTrap | Destructor\n" << RST;
}

void DiamondTrap::whoAmI() {
	std::cout << "I'm DiamondTrap " << _name \
	<< ", also known as ClapTrap " << ClapTrap::_name << ".\n";
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}