/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:50:36 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/28 13:00:11 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

void push_multi(MutantStack<int>& ms, int vals[], int size) {
	if (!vals) return;
	std::cout << GRN 
		<< "pushing values into " << ms.name << ':';
	for (int i = 0; i < size; i++) {
		std::cout << ' ' << vals[i];
		ms.push(vals[i]);
	}
	std::cout << '\n' << RST;
}

void pop_multi(MutantStack<int>& ms, int count) {
	std::cout << RED 
		<< "popping from " << ms.name 
		<< ' ' << count << " times:";
	while (count-- > 0) {
		std::cout << ' ' << ms.top();
		ms.pop();
	}
	std::cout << '\n' << RST;
}

void test_list() {
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << list.back() << std::endl;

	list.pop_back();

	std::cout << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);

	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(list);
}

void test_mstack() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void test_better() {
	MutantStack<int> mstack;
	std::cout << mstack << '\n';

	int vals[3] = {1, 2, 3};
	push_multi(mstack, vals, 3);
	std::cout << mstack << '\n';
	pop_multi(mstack, 2);
	std::cout << mstack << '\n';

	MutantStack<int> copied(mstack);
	std::cout << YEL
		<< "changing " << mstack.name
		<< ".top() value to 42\n" << RST;
	mstack.top() = 42;
	std::cout << mstack;
	std::cout << copied << '\n';

	push_multi(copied, vals, 3);
	std::cout << mstack;
	std::cout << copied << '\n';
}

int main()
{
	// std::cout << YEL << "\n-- testing list\n" << RST;
	// test_list();
	// std::cout << YEL << "\n-- testing mstack\n" << RST;
	// test_mstack();
	std::cout << YEL << "\n-- running own tests\n" << RST;
	test_better();
	
	return 0;
}