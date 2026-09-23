/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:53:03 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/24 01:56:01 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Common.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& src) : _type(src._type) {}

AMateria::AMateria(const std::string& type) : _type(type) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& src) {
	(void) src;
	return *this;
}

const std::string& AMateria::getType(void) const {
	return _type;
} 

void AMateria::use(ICharacter& target) {
	std::cout << RED
		<< "Cannot use abstract materia on " << target.getName()
		<< RST << std::endl;
}