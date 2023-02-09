NAME	=	ex02
CXX		=	c++
CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean	:
		@ rm -rf $(OBJ)

fclean 	:	clean
		@ rm -f $(NAME)

re 		: 	fclean all

.PHONY	:	all clean fclean re