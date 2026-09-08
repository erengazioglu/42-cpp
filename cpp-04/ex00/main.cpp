/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:24 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/08 10:01:06 by egaziogl         ###   ########.fr       */
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

		std::cout << "[" << animal.getType() << "] ";
		animal.makeSound();
		std::cout << "[" << cat.getType() << "] ";
		cat.makeSound();
		std::cout << "[" << dog.getType() << "] ";
		dog.makeSound();
	}
	{
		WrongAnimal	animal;
		WrongCat	cat;

		std::cout << "[" << animal.getType() << "] ";
		animal.makeSound();
		std::cout << "[" << cat.getType() << "] ";
		cat.makeSound();
	}
	return 0;
}