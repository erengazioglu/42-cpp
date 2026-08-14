/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:59:26 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/14 19:29:14 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie *zombs = zombieHorde(5, "Zomb");
	for (int i = 0; i < 5; i++) {
		zombs[i].announce();
	}
	for (int i = 0; i < 5; i++) {
		delete (zombs + i);
	}

}