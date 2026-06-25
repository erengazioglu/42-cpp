/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 20:51:39 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/25 21:30:53 by egaziogl         ###   ########.fr       */
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

void    add_contact(int i)
{
    std::string fname = get_input("First name:", false);
    std::string lname = get_input("Last name:", false);
    std::string nname = get_input("Nickname:", false);
    std::string phone = get_input("Phone number:", false);
    std::string secret = get_input("Darkest secret:", false);

}

void    search_contact(int i)
{
    std::cout << "searching\n";
}

int main(void) {
    int last_idx = 0;
    std::string user_input = get_input("(ADD/SEARCH/EXIT)", true);
    
    while (user_input != "EXIT")
    {
        if (user_input == "ADD")
            add_contact(last_idx++);
        else if (user_input == "SEARCH")
            search_contact(last_idx++);
        user_input = get_input("(ADD/SEARCH/EXIT)", true);
    }
    return 0;
}
