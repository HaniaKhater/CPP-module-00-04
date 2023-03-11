# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hania <hania@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 02:24:26 by hkhater           #+#    #+#              #
#    Updated: 2023/03/11 23:46:11 by hania            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	DiamondTrap

COMPILER	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

INCS	= ./ClapTrap.hpp\
		./ScavTrap.hpp\
		./FragTrap.hpp\
		./DiamondTrap.hpp\

SRCS	=	./main.cpp\
		./ClapTrap.cpp\
		./ScavTrap.cpp\
		./FragTrap.cpp\
		./DiamondTrap.cpp\

OBJS	=	$(SRCS:.cpp=.o)

.cpp.o:
		${COMPILER} ${CFLAGS} -c $< -o $(<:.cpp=.o)

all:		$(NAME)

$(NAME):	$(INCS) $(OBJS)
		$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re%