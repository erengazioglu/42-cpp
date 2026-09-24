/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:24 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/24 13:20:38 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	{
		Animal	animal;
		Cat		cat;
		Dog		dog;

		animal.announceType();
		animal.makeSound();
		cat.announceType();
		cat.makeSound();
		dog.announceType();
		dog.makeSound();
	}
	std::cout << "---\n";
	{
		WrongAnimal	animal;
		WrongAnimal *cat1 = new WrongCat;
		WrongCat	cat2;

		animal.announceType();
		animal.makeSound();
		cat1->announceType();
		cat1->makeSound();
		cat2.announceType();
		cat2.makeSound();
		delete cat1;
	}
	return 0;
}