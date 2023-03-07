# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hania <hania@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 01:12:46 by hania             #+#    #+#              #
#    Updated: 2023/03/07 04:19:01 by hania            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Polymorphism

COMPILER	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCS	= ./Animal.hpp\
		./Dog.hpp\
		./Cat.hpp\
		./WrongAnimal.hpp\
		./WrongDog.hpp\
		./WrongCat.hpp\

SRCS	=	./main.cpp\
		./Animal.cpp\
		./Dog.cpp\
		./Cat.cpp\
		./WrongAnimal.cpp\
		./WrongDog.cpp\
		./WrongCat.cpp\

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(INCS) $(OBJS)
		$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re