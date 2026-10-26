/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:42:21 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/22 12:43:28 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {
	std::cout << BLU << "Data | Default constructor\n" << RST;
}

Data::Data(const Data& src) {
	std::cout << BLU << "Data | Copy constructor\n" << RST;
}

Data::~Data() {
	std::cout << RED << "Data | Destructor\n" << RST;
}

Data& Data::operator=(const Data& src) {
	std::cout << BLU << "Data | Copy assignment\n" << RST;
	return *this;
}