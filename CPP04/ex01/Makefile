# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hania <hania@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 01:12:46 by hania             #+#    #+#              #
#    Updated: 2023/03/07 07:24:12 by hania            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Brain

COMPILER	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCS	= ./Animal.hpp\
		./Dog.hpp\
		./Cat.hpp\
		./Brain.hpp\

SRCS	=	./main.cpp\
		./Animal.cpp\
		./Dog.cpp\
		./Cat.cpp\
		./Brain.cpp\

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