/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:51:58 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/14 13:58:03 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include "Common.hpp"

class ScalarConverter {
	public:
		static void convert(std::string);
		static void print();
		static void print(char);
		static void print(int);
		static void print(float);
		static void print(double);
		static void print(std::string, bool is_float);
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter&);
};

#endif