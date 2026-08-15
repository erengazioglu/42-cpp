/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:37:15 by egaziogl          #+#    #+#             */
/*   Updated: 2026/08/15 17:42:15 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "string address:    " << &str << "\n";
	std::cout << "stringPTR address: " << stringPTR << "\n";
	std::cout << "stringREF address: " << &stringREF << "\n";
	std::cout << "string value:      " << str << "\n";
	std::cout << "stringPTR value:   " << *stringPTR << "\n";
	std::cout << "stringREF value:   " << stringREF << "\n";
}