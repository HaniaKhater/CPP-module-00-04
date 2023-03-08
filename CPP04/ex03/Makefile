# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hania <hania@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 01:12:46 by hania             #+#    #+#              #
#    Updated: 2023/03/08 02:29:22 by hania            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Interface

COMPILER	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

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

all:		$(NAME)

$(NAME):	$(INCS) $(OBJS)
		$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re