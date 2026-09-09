/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 23:08:52 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 13:25:14 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ClapTrap::default_hp = 10;
int ClapTrap::default_ep = 10;
int ClapTrap::default_dmg = 0;

ClapTrap::ClapTrap()
	: _name(""), _class_name("ClapTrap")
	, _hp(ClapTrap::default_hp)
	, _ep(ClapTrap::default_ep)
	, _dmg(ClapTrap::default_dmg) {
	std::cout << BLU << "ClapTrap | Default constructor\n" << RST;
	std::cout << CYN << _name << _hp << _ep << _dmg << RST << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _class_name("ClapTrap")
	, _hp(10), _ep(10), _dmg(0) {
	std::cout << BLU << "ClapTrap | Custom constructor\n" << RST;
	std::cout << CYN << _name << _hp << _ep << _dmg << RST << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int dmg) 
	: _name(name), _class_name("ClapTrap")
	, _hp(hp), _ep(ep), _dmg(dmg) {
	std::cout << BLU << "ClapTrap | Custom constructor\n" << RST;
}

ClapTrap::ClapTrap(const ClapTrap& src) 
	: _name(src._name), _class_name("ClapTrap")
	, _hp(src._hp), _ep(src._ep), _dmg(src._dmg) {
	std::cout << BLU << "ClapTrap | Copy constructor\n" << RST;
}

ClapTrap::~ClapTrap() {
	std::cout << RED << "ClapTrap | Destructor\n" << RST;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	std::cout << MAG << "ClapTrap | Copy assignment operator\n" << RST;
	this->_name = src._name;
	this->_dmg = src._dmg;
	this->_hp = src._hp;
	this->_ep = src._ep;
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
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
		<< ", causing " << _dmg \
		<< " points of damage." << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hp <= 0) {
		std::cout << YEL \
			<< _class_name << " " << _name \
			<< " is already ded!" << std::endl;
		return ;
	}
	_hp -= amount;
	std::cout \
		<< _class_name << " " << _name \
		<< " takes " << amount \
		<< " points of damage." << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount) {
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
	_hp += amount;
	std::cout \
		<< _class_name << " " << _name \
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