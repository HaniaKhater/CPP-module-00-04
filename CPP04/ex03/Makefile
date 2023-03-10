# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkhater <hkhater@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 01:12:46 by hania             #+#    #+#              #
#    Updated: 2023/03/10 00:07:29 by hkhater          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Interface

COMPILER	=	c++

CFLAGS	= -g3	-Wall -Wextra -Werror -std=c++98

INCS	= ./Character.hpp\
		./Ice.hpp\
		./Cure.hpp\
		./AMateria.hpp\
		./ICharacter.hpp\
		./IMateriaSource.hpp\
		./MateriaSource.hpp\

SRCS	=	./main.cpp\
		./AMateria.cpp\
		./Ice.cpp\
		./Cure.cpp\
		./Character.cpp\
		./MateriaSource.cpp\

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

.PHONY:		all clean fclean re