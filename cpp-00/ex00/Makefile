# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/14 18:00:49 by egaziogl          #+#    #+#              #
#    Updated: 2026/08/14 18:00:52 by egaziogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ -Wall -Wextra -Werror -std=c++98
NAME 	= megaphone

all: $(NAME)

$(NAME): $(NAME).cpp
	$(CC) $(NAME).cpp -o $(NAME)

clean:
	@echo "Nothing to clean"
fclean:
	rm $(NAME)
re: fclean all