# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/14 18:06:37 by egaziogl          #+#    #+#              #
#    Updated: 2026/08/15 17:55:37 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= tests
SRC		= Account.cpp tests.cpp
DEP		= Account.hpp

all: $(NAME)

$(NAME): $(SRC) $(DEP)
	$(CC) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean"
fclean:
	rm $(NAME)
re: fclean all
.PHONY: all clean fclean re