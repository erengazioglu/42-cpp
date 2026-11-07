/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:13:17 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/07 19:35:44 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>
#include <stdexcept>
#include <algorithm>

Span::Span(): _size(10000) {
	_data = std::deque<int>();
};
Span::Span(unsigned int n): _size(n) {
	_data = std::deque<int>();
};
Span::~Span() {};

void Span::addNumber(int val) {
	if (_data.size() >= _size)
		throw std::out_of_range("Max size exceeded");
	_data.push_back(val);
};

int Span::shortestSpan() const {
	if (_data.size() < 2)
		throw std::out_of_range("Span needs at least 2 elements");
	std::deque<int> sorted(_data);
	std::sort(sorted.begin(), sorted.end());
	typedef std::deque<int>::iterator iter;
	int min = *(sorted.begin() + 1) - *sorted.begin();
	for (iter it = sorted.begin() + 2; it != sorted.end() - 1; ++it) {
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return (min);
};

int Span::longestSpan() const {
	if (_data.size() < 2)
		throw std::out_of_range("Span needs at least 2 elements");
	return (
		*std::max_element(_data.begin(), _data.end())
		- *std::min_element(_data.begin(), _data.end())
	);
};
