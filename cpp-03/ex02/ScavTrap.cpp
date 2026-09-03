/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 00:45:28 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 15:53:34 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
	: ClapTrap("", 100, 50, 20) {
	std::cout << BLU << "ScavTrap | Default constructor\n" << RST;
	_class_name = "ScavTrap";
}

ScavTrap::ScavTrap(std::string name) 
	: ClapTrap(name, 100, 50, 20) {
	std::cout << BLU << "ScavTrap | Custom constructor\n" << RST;
	_class_name = "ScavTrap";
}

ScavTrap::ScavTrap(std::string name, int hp, int ep, int dmg) 
	: ClapTrap(name, hp, ep, dmg) {
	std::cout << BLU << "ScavTrap | Custom constructor\n" << RST;
	_class_name = "ScavTrap";
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap | Destructor\n" << RST;
}

void ScavTrap::guardGate() {
	std::cout \
	<< _class_name << " " << _name \
	<< " is in gate keeper mode.\n";
}