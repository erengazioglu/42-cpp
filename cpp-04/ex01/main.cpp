/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:47:24 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/09 15:45:10 by egaziogl         ###   ########.fr       */
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
		Dog a;
		Dog b(a);
		Dog c = a;
		Dog d;
		d = a;
	}

	return 0;
}