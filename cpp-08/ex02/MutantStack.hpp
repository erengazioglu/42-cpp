/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:51:45 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/27 00:25:06 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		typedef T*			iterator;
		typedef const T*	const_iterator;
		
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack&);
		iterator begin() {
			return std::stack::begin();
		}
		// const iterator begin() const {
		// 	return std::stack::begin();
		// }
		iterator end() {
			return std::stack::end();
		}
};
