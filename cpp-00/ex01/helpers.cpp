/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:28:30 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 16:36:57 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string to_upper(std::string str) {
	int len = str.length();
	for (int i = 0; i < len; i++) {
		str[i] = toupper(str[i]);
	}
	return str;
}

std::string	trim(std::string str) {
	while (str.length() && str[0] == ' ')
		str.erase(0, 1);
	while (str.length() && str[str.length() - 1] == ' ')
		str.erase(str.length() - 1, 1);
	return str;
}
