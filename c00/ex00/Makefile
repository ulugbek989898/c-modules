# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uisroilo <uisroilo@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 19:07:42 by uisroilo          #+#    #+#              #
#    Updated: 2022/12/29 19:07:43 by uisroilo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	megaphone
CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror

SRCS	=	megaphone.cpp

all		:	$(NAME)

$(NAME)	:	$(SRCS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean	:
			@ rm -f $(NAME)

fclean 	:	clean

re 		: 	fclean all

.PHONY	:	all clean fclean re