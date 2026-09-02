/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 23:08:52 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/02 17:52:52 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name(""), _hp(10), _ep(10), _dmg(0) {
	std::cout << BLU << "ClapTrap | Default constructor\n" << RST;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hp(10), _ep(10), _dmg(0) {
	std::cout << BLU << "ClapTrap | Custom constructor\n" << RST;
}

ClapTrap::ClapTrap(const ClapTrap& src) 
	: _name(src.get_name())
	, _hp(src.get_hp())
	, _ep(src.get_ep())
	, _dmg(src.get_dmg()) {
	std::cout << BLU << "ClapTrap | Copy constructor\n" << RST;
}

ClapTrap::~ClapTrap() {
	std::cout << BLU << "ClapTrap | Default destructor\n" << RST;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	this->_name = src.get_name();
	this->_dmg = src.get_dmg();
	this->_hp = src.get_hp();
	this->_ep = src.get_ep();
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if (_ep <= 0) {
		std::cout \
			<< "Claptrap " << _name \
			<< " is out of energy!" << std::endl;
		return ;
	}
	_ep--;
	std::cout \
		<< "ClapTrap " << _name \
		<< " attacks " << target \
		<< ", causing " << _dmg \
		<< " points of damage." << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount) {
	_hp -= amount;
	std::cout \
		<< "ClapTrap " << _name \
		<< " takes " << amount \
		<< " points of damage." << std::endl; 
}
void	ClapTrap::beRepaired(unsigned int amount) {
	if (_ep <= 0) {
		std::cout \
			<< "Claptrap " << _name \
			<< " is out of energy!" << std::endl;
		return ;
	}
	_ep--;
	_hp += amount;
	std::cout \
		<< "ClapTrap " << _name \
		<< " restores " << amount \
		<< " points of hp." << std::endl; 
}

std::string	ClapTrap::get_name(void) const {
	return _name;
}
int	ClapTrap::get_hp(void) const {
	return _hp;
}
int	ClapTrap::get_ep(void) const {
	return _ep;
}
int	ClapTrap::get_dmg(void) const {
	return _dmg;
}