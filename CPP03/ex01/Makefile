# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 02:24:26 by hkhater           #+#    #+#              #
#    Updated: 2023/03/06 03:56:53 by hkhater          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ScavTrap

COMPILER	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

INCS	= ./ClapTrap.hpp\
		./ScavTrap.hpp\

SRCS	=	./main.cpp\
		./ClapTrap.cpp\
		./ScavTrap.cpp\

OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(INCS) $(OBJS)
		$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re%