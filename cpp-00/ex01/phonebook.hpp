/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:35:00 by egaziogl          #+#    #+#             */
/*   Updated: 2026/06/25 21:20:37 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iostream>

# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define CYN "\033[36m"
# define RST "\033[0m"

class Contact {
    public:
        Contact();
        int         get_idx();
        std::string get_fname;
        std::string get_lname;
        std::string get_nname;
    private:
        int _idx;
        std::string _fname;
        std::string _lname;
        std::string _nname;
};

class Phonebook {
    public:
        std::string my_string;
        void    add();
        void    search();
    private:
        Contact _contacts[8];
};

#endif