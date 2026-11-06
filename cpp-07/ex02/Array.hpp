/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:31:25 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/07 00:35:18 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

#define RED "\033[31m"
#define GRN "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYN "\033[36m"
#define RST "\033[0m"

template <typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>&);
		~Array();

		Array<T>& operator=(const Array<T>&);
		T& operator[](unsigned int n);
		const T& operator[](unsigned int n) const;

		unsigned int size() const;
		void print(std::string name) const;
	private:
		unsigned int _n;
		T* _data;
};