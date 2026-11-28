/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:51:45 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/28 12:58:14 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <iostream>

#define RED "\033[31m"
#define GRN "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYN "\033[36m"
#define RST "\033[0m"

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator			iterator;
		typedef typename std::stack<T>::container_type::const_iterator		const_iterator;
		
		MutantStack() : name("frankenstack") {};
		~MutantStack() {};
		MutantStack(const MutantStack<T>& src): std::stack<T>(src), name("copy of " + src.name) {
			std::cout << YEL << "copied MutantStack " << src.name << RST << '\n';
		}
		MutantStack& operator=(const MutantStack<T>& src) {
			std::stack<T>::operator=(src);
			name = src.name;
			return *this;
		}
		iterator begin() {
			return this->c.begin();
		}
		const_iterator begin() const {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
		const_iterator end() const {
			return this->c.end();
		}
		std::string name;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const MutantStack<T>& ms) {
	os	<< "MutantStack(\"" 
		<< ms.name << "\")\n"
		<< "- size: " << ms.size()
		<< '\n';
	if (!ms.empty()) {
		os << "- contents:\n";
		for (typename MutantStack<T>::const_iterator it = ms.begin(); it != ms.end(); it++)
			std::cout << "    " << *it << '\n';
	}
	return os;
}
