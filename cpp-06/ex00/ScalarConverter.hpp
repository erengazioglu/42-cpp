/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 18:51:58 by egaziogl          #+#    #+#             */
/*   Updated: 2026/10/04 18:57:23 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include "Common.hpp"

class ScalarConverter {
	public:
		static void convert(std::string);
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter&);
};

#endif