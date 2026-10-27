/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 12:42:21 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/28 00:15:26 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
	: _sdata("Default data")
	, _intdata(42)
{}

Data::Data(const bool alt)
	: _sdata(alt ? "One type of data" : "Two type of data!")
	, _intdata(alt ? 42 : 43)
{}

Data::Data(const Data& src) 
	: _sdata(src._sdata)
	, _intdata(src._intdata)
{}

Data::~Data() {
	std::cout << RED << "Data | Empty destructor\n" << RST;
}

Data& Data::operator=(const Data& src) {
	if (this != &src) {
		_sdata		= src._sdata;
		_intdata	= src._intdata;
	}
	return *this;
}
