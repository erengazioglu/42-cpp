/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:13:17 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/08 01:07:00 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int small_rand() {
	return ((rand() % 100) * 10);
}

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
	int min = *(sorted.begin() + 1) - *sorted.begin();
	typedef std::deque<int>::iterator iter;
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

void Span::generate(unsigned int n) {
	if (_data.size() + n > _size)
		throw std::out_of_range("Max size exceeded");
	std::generate_n(std::back_inserter(_data), n, small_rand);
	std::sort(_data.begin(), _data.end());
}

void Span::print() const {
	typedef std::deque<int>::const_iterator iter;
	std::cout << CYN 
		<< "Span (" << _data.size() 
		<< '/' << _size 
		<< ")" << RST << "\n";
	for (iter i = _data.begin(); i != _data.end(); ++i) {
		std::cout << *i << "\n";
	}
}
// void Span::generate(int min, int max) {}
// void Span::generate(int n, int min, int max) {}

