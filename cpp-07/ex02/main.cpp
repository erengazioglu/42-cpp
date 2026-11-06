/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 01:31:56 by egaziogl          #+#    #+#             */
/*   Updated: 2026/11/06 23:55:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

void print_title(const std::string& what) {
	std::cout << YEL << "---\n" << what << RST;
}

int main() {
	print_title("Testing basic arrays and operator[] access\n");
	Array<int> intarr(5);
	Array<std::string> strarr(3);
	intarr[0] = 42;
	intarr[4] = 4242;
	intarr.print("intarr");
	strarr[0] = "hello";
	strarr[1] = "";
	strarr[2] = "world";
	strarr.print("strarr");

	print_title("Testing empty array\n");
	Array<int> emptyarr;
	emptyarr.print("emptyarr");
	try {
		emptyarr[0] = 1;
	} catch (std::exception& e) {
		std::cerr << RED << "emptyarr failed: "
			<< e.what() << "\n" << RST;
	}

	print_title("Testing copy constructor\n");
	Array<int> intcopy(intarr);
	Array<std::string> strcopy(strarr);
	intcopy[0] = 1;
	intcopy[1] = 2;
	strcopy[0] = "goodbye";
	strcopy[1] = "cruel";
	intarr.print("intarr");
	intcopy.print("intcopy");
	strarr.print("strarr");
	strcopy.print("strcopy");

	print_title("Testing copy assignment\n");
	intarr = intcopy;
	strarr = strcopy;
	intcopy[2] = 3;
	strcopy[2] = "universe";
	intarr.print("intarr");
	intcopy.print("intcopy");
	strarr.print("strarr");
	strcopy.print("strcopy");

	print_title("Testing out of bounds access\n");
	try {
		intarr[20] = 3;
		std::cout << intarr[20] << '\n';
	} catch (std::exception& e) {
		std::cerr << RED << "intarr failed: "
			<< e.what() << "\n" << RST;
	}
	
	return 0;
}
