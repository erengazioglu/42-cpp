/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:11:13 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/21 09:57:43 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("") {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << BLU << "Character | Default constructor\n" << RST;
}

Character::Character(std::string const & name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& src) {
	std::cout << BLU << "Character | Copy constructor\n" << RST;
}

Character::~Character() {
	std::cout << RED << "Character | Destructor\n" << RST;
}

Character& Character::operator=(const Character& src) {
	std::cout << BLU << "Character | Copy assignment\n" << RST;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = src._inventory[i];
	}
	return *this;
}

void Character::equip(AMateria* m) {
	if (!m) {
		std::cout << RED 
			<< "Character " << _name
			<< " cannot equip a null materia.\n" << RST;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout
				<< "Character " << _name 
				<< " equips " << m->getType() 
				<< " to slot " << i 
				<< ".\n" << RST;
			return ;
		}
	}
	std::cout << RED 
		<< "Character " << _name
		<< " cannot equip " << m->getType()
		<< ": inventory is full.\n" << RST;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4) {
		std::cout << RED 
			<< "Invalid slot number " << idx
			<< " (has to be between 0 and 3).\n" << RST;
		return ;
	}
	if (!_inventory[idx]) {
		std::cout << RED 
			<< "Character " << _name
			<< " cannot unequip an empty slot " << idx 
			<< ".\n" << RST;
		return ;
	}
	std::cout << BLU 
		<< "Character " << _name 
		<< " unequips " << _inventory[idx]->getType() 
		<< " from slot " << idx
		<< ".\n" << RST;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4) {
		std::cout << RED 
			<< "Invalid slot number (" << idx
			<< " has to be between 0 and 3).\n" << RST;
		return ;
	}
	if (!_inventory[idx]) {
		std::cout << RED 
			<< "Character " << _name
			<< " cannot use an empty slot (" 
			<< idx << ").\n" << RST;
		return ;
	}
	std::cout << BLU 
		<< "Character " << _name 
		<< " uses " << _inventory[idx]->getType() 
		<< " on " << target.getName()
		<< RST << std::endl;
	_inventory[idx]->use(target);
}

