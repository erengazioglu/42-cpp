/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:53:03 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/21 10:48:05 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& src) : _type(src._type) {}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& src) {
	(void) src;
	return *this;
}
