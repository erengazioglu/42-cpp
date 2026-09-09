/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:24 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 14:02:24 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	Animal	animal;
	Cat		cat;
	Dog		dog;

	// you could use Animal* animals[] = {&animal, &cat, &dog}
	// but the functions would have to be virtual
	animal.announceType();
	animal.makeSound();
	cat.announceType();
	cat.makeSound();
	dog.announceType();
	dog.makeSound();
	return 0;
}