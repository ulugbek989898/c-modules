NAME	=	ex01
CXX		=	c++
CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror

SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

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