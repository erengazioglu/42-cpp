/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:21:27 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/24 12:45:09 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_learned[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_learned[i] == NULL)
			return;
		delete _learned[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (src._learned[i] == NULL)
				return *this;
			_learned[i] = src._learned[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* src) {
	if (!src) return;
	for (int i = 0; i < 4; i++) {
		if (_learned[i] == NULL) {
			_learned[i] = src;
			return;
		}
	}
	std::cout << "No more space for materia.\n";
	delete src;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_learned[i] == NULL) {
			std::cout << "No materia created.\n";
			return NULL;
		}
		if (type == _learned[i]->getType())
			return _learned[i]->clone();
	}
	std::cout << "No materia created.\n";
	return NULL;
}