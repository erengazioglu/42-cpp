/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 00:45:28 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 12:23:05 by egaziogl         ###   ########.fr       */
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

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap | Destructor\n" << RST;
	_class_name = "ScavTrap";
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
	_class_name = "ScavTrap";
	std::cout << BLU << "ScavTrap | Copy constructor\n" << RST;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
	std::cout << MAG << "ScavTrap | Copy assignment operator\n" << RST;
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (_hp <= 0) {
		std::cout << YEL \
			<< _class_name << " " << _name \
			<< " is ded!\n" << RST;
		return ;
	}
	if (_ep <= 0) {
		std::cout << YEL \
			<< _class_name << " " << _name \
			<< " is out of energy!\n" << RST;
		return ;
	}
	_ep--;
	std::cout \
		<< _class_name << " " << _name \
		<< " attacks " << target \
		<< " " << GRN << "with a different message ;)" << RST << " causing " << _dmg \
		<< " points of damage." << std::endl; 
}

void ScavTrap::guardGate() {
	if (_hp <= 0) {
		std::cout << YEL \
			<< _class_name << " " << _name \
			<< " is ded!\n" << RST;
		return ;
	}
	std::cout \
	<< _class_name << " " << _name \
	<< " is in gate keeper mode.\n";
}