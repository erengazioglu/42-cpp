/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:20:45 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/03 15:55:30 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap() {
	std::cout << BLU << "FragTrap | Default constructor\n" << RST;
	_class_name = "FragTrap";
}

FragTrap::FragTrap(std::string name) : ScavTrap(name, 100, 100, 30) {
	std::cout << BLU << "FragTrap | Default constructor\n" << RST;
	_class_name = "FragTrap";
}

FragTrap::~FragTrap() {
	std::cout << RED << "FragTrap | Destructor\n" << RST;
}

void FragTrap::highFivesGuys() {
	std::cout \
	<< _class_name << " " << _name \
	<< " says \"high-five?\".\n";
}