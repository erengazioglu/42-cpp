/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:51:45 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/20 17:43:33 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class MutantStack: public std::stack {
	public:
		typedef T* iterator;
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack&);
		
};
