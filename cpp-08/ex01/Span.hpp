/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 00:51:10 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/08 00:43:11 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <iostream>

#define RED "\033[31m"
#define GRN "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYN "\033[36m"
#define RST "\033[0m"

class Span {
	public:
		Span();
		Span(unsigned int n);
		~Span();
		void addNumber(int);
		void generate(unsigned int n);
		// void generate(int min, int max);
		// void generate(int n, int min, int max);
		int shortestSpan() const;
		int longestSpan() const;
		void print() const;
	private:
		unsigned int _size;
		std::deque<int> _data;
};