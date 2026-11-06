/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:31:53 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/07 00:33:56 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
Array<T>::Array(): _n(0) {
	_data = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n): _n(n) {
	_data = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T>& src): _n(src.size()) {
	_data = new T[_n]();
	for (unsigned int i = 0; i < _n; i++)
		_data[i] = src[i];
};

template <typename T>
Array<T>::~Array() {
	delete[] _data;
};

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& src) {
	if (this != &src) {
		delete[] _data;
		_n = src.size();
		_data = new T[_n]();
		for (unsigned int i = 0; i < _n; i++)
			_data[i] = src[i];
	}
	return (*this);
};

template <typename T>
T& Array<T>::operator[](unsigned int n) {
	if (n >= _n)
		throw std::out_of_range("Attempt to access index out of bounds");
	return _data[n];
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const {
	if (n >= _n)
		throw std::out_of_range("Attempt to access index out of bounds");
	return _data[n];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _n;
}

template <typename T>
void Array<T>::print(std::string name) const {
	std::cout << CYN << name 
		<< " (size " << size()
		<< ")\n" << RST;
	for (unsigned int i = 0; i < _n; i++) {
		std::cout << name
		<< "[" << i
		<< "]: " << _data[i]
		<< '\n';
	}
}
