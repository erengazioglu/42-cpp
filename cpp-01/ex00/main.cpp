/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:59:26 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 17:25:57 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie* zomb = newZombie("Zomb");
	zomb->announce();
	randomChump("Rando1");
	randomChump("Rando2");
	delete zomb;
}