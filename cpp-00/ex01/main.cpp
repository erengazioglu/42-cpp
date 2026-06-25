/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:12:40 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/26 00:15:45 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string get_input(std::string prompt, bool accept_empty)
{ 
    std::string user_input = "";
    std::cout << BLU;
    if (prompt.length()) std::cout << prompt << std::endl << RST;
    std::cin >> user_input;
    if (!accept_empty) {
        while (user_input == "") {
            std::cout << RED << "Please enter a valid string." << RST;
            if (prompt.length()) std::cout << prompt << std::endl << RST;
            std::cin >> user_input;
        }
    }
    return (user_input);
}

int main(void) {
    int last_idx = 0;
    std::string user_input = get_input("(ADD/SEARCH/EXIT)", true);
    Phonebook book;
    
    while (user_input != "EXIT")
    {
        if (user_input == "ADD")
            book.add(last_idx++);
        else if (user_input == "SEARCH")
            book.search();
        user_input = get_input("(ADD/SEARCH/EXIT)", true);
    }
    return 0;
}
