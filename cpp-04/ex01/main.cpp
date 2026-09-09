/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:24 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 16:35:44 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	{
		Animal* zoo[10];
		for (int i = 0; i < 5; i++)
			zoo[i] = new Cat;
		for (int i = 5; i < 10; i++)
			zoo[i] = new Dog;
		for (int i = 0; i < 10; i++) {
			zoo[i]->makeSound();
			delete zoo[i];
		}
	}
	{
		Cat a;
		Cat b(a);
		Cat c = a;
		Cat d;
		d = a;
	}
	{
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