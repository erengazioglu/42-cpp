/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:00:35 by egaziogl          #+#    #+#             */
/*   Updated: 2026/09/24 13:16:11 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

void test1() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
}

void test2() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	AMateria* materia = src->createMateria("cure");

	for (int i = 0; i < 4; i++) {
		src->learnMateria(new Cure());
	}
	
	ICharacter* me = new Character("me");
	materia = src->createMateria("cure");
	me->unequip(0);
	me->equip(materia);
	for (int i = 0; i < 4; i++) {
		materia = src->createMateria("ice");
		me->equip(materia);
	}
	me->unequip(4);

	ICharacter* bob = new Character("bob");
	for (int i = 0; i < 5; i++) {
		me->use(i, *bob);
	}

	delete src;
	delete materia;
	delete me;
	delete bob;
}


int main(void) {
	// test1();
	test2();

	return 0;
}