/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 01:36:19 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/02 15:56:16 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	_name = name;
	_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << _name;
	if (!_weapon) {
		std::cout << " attacks with their bare hands!\n";
		return ;
	}
	std::cout << " attacks with their " << _weapon->getType() << std::endl;
}
