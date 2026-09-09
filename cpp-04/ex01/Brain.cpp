/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 10:22:05 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 13:52:47 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << BLU << "Brain | Default constructor\n" << RST;
}

Brain::~Brain() {
	std::cout << RED << "Brain | Destructor\n" << RST;
}

Brain::Brain(const Brain& src) {
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	std::cout << BLU << "Brain contents copied!\n" << RST;
}

Brain& Brain::operator=(const Brain& src) {
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
		std::cout << BLU << "Brain contents copied!\n" << RST;
	}
	return *this;
}

