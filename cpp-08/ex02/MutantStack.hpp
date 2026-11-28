/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:51:45 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/28 10:26:53 by egaziogl         ###   ########.fr       */
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
		
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack<T>& other): std::stack<T>(other) {}
		MutantStack& operator=(const MutantStack<T>& other) {
			std::stack<T>::operator=(other);
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
};

template <typename T>
std::ostream& operator<<(std::ostream& os, MutantStack<T> ms) {
	os	<< CYN << "- MutantStack size: "
		<< ms.size() << '\n' << RST;
	if (!ms.empty()) {
		os	<< CYN << "- contents:\n" << RST;
		for (typename MutantStack<T>::iterator it = ms.begin(); it != ms.end(); it++)
			std::cout << "    " << *it << '\n';
	}
	return os;
}
