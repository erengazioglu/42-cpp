/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:42:21 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 00:37:33 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
	: sdata("Default data")
	, intdata(0)
{}

Data::Data(const bool alt)
	: sdata(alt ? "One type of data" : "Two type of data!")
	, intdata(alt ? 42 : 43)
{}

Data::Data(const Data& src) 
	: sdata(src.sdata)
	, intdata(src.intdata)
{}

Data::~Data() {}

Data& Data::operator=(const Data& src) {
	if (this != &src) {
		sdata	= src.sdata;
		intdata	= src.intdata;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Data& d) {
	return os
		<< &d << " "
		<< d.sdata << " "
		<< d.intdata;
}