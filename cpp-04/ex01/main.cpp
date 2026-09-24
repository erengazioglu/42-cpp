/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:24 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/24 13:33:09 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	{
		Animal* zoo[10];
		std::cout << "(creating cats)\n";
		for (int i = 0; i < 5; i++)
			zoo[i] = new Cat;
		std::cout << "(creating dogs)\n";
		for (int i = 5; i < 10; i++)
			zoo[i] = new Dog;
		for (int i = 0; i < 10; i++) {
			zoo[i]->makeSound();
			delete zoo[i];
		}
	}
	std::cout << "---\n";
	{
		std::cout << "(testing different constructors)\n";
		Cat a;
		Cat b(a);
		Cat c = a;
		Cat d;
		d = a;
	}
	std::cout << "---\n";
	{
		std::cout << "(testing brains, deep copying, and memory leaks)\n";
		Dog* a = new Dog;
		Dog b;
		a->setIdea(0, "Chew on the guest's shoes.");
		a->setIdea(1, "Pee on the carpet.");
		b = *a;
		a->setIdea(1, "");
		b.setIdea(2, "Bark!");
		a->readThoughts();
		delete a;
		b.readThoughts();
	}

	return 0;
}