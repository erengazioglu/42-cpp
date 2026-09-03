# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/30 23:18:52 by egaziogl          #+#    #+#              #
#    Updated: 2026/09/03 15:59:47 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= diamond
SRC		= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
DEP		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

all: $(NAME)

$(NAME): $(SRC) $(DEP)
	$(CC) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean"
fclean:
	rm $(NAME)
re: fclean all
.PHONY: all clean fclean re