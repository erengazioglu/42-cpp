/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:31:53 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/06 23:57:16 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array {
	public:
		Array(): _n(0) {
			_data = new T[0];
		};
		Array(unsigned int n): _n(n) {
			_data = new T[n]();
		};
		Array(const Array<T>& src): _n(src.size()) {
			_data = new T[_n]();
			for (unsigned int i = 0; i < _n; i++)
				_data[i] = src[i];
		};
		~Array() {
			delete[] _data;
		};
		Array<T>& operator=(const Array<T>& src) {
			if (this != &src) {
				delete[] _data;
				_n = src.size();
				_data = new T[_n]();
				for (unsigned int i = 0; i < _n; i++)
					_data[i] = src[i];
			}
			return (*this);
		};
		T& operator[](unsigned int n) {
			if (n >= _n)
				throw std::out_of_range("Attempt to access index out of bounds");
			return _data[n];
		}
		const T& operator[](unsigned int n) const {
			if (n >= _n)
				throw std::out_of_range("Attempt to access index out of bounds");
			return _data[n];
		}
		unsigned int size() const {
			return _n;
		}
		void print(std::string name) {
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
	private:
		T* _data;
		unsigned int _n;
};
