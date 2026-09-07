/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:20:45 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/07 23:30:06 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << BLU << "FragTrap | Default constructor\n" << RST;
	_class_name = "FragTrap";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << BLU << "FragTrap | Custom constructor\n" << RST;
	_class_name = "FragTrap";
}

FragTrap::~FragTrap() {
	std::cout << RED << "FragTrap | Destructor\n" << RST;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
	std::cout << MAG << "ScavTrap | Copy constructor\n" << RST;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
	std::cout << MAG << "ScavTrap | Copy assignment operator\n" << RST;
	if (this != &src)
		ClapTrap::operator=(src);
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout \
	<< _class_name << " " << _name \
	<< " says \"high-five?\".\n";
}