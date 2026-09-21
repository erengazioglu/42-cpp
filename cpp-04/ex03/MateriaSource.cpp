/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:21:27 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/21 10:18:28 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_learned[i] = NULL;
	}
}

void MateriaSource::learnMateria(AMateria* src) {
	
}

AMateria* MateriaSource::createMateria(std::string const & type) {

}