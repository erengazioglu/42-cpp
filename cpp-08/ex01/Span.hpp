/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:51:10 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/07 17:23:44 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>

class Span {
	public:
		Span();
		Span(unsigned int n);
		~Span();
		void addNumber(int);
		int shortestSpan() const;
		int longestSpan() const;
	private:
		unsigned int _size;
		std::deque<int> _data;
};