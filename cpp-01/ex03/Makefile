# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/15 17:50:47 by egaziogl          #+#    #+#              #
#    Updated: 2026/08/15 17:54:19 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= violence
SRC		= \
	HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp \
	main.cpp
DEPS	= \
	HumanA.hpp \
	HumanB.hpp \
	Weapon.hpp	

all: $(NAME)

$(NAME): $(SRC) $(DEPS)
	$(CC) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean"
fclean:
	rm $(NAME)
re: fclean all
.PHONY: all clean fclean re