# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafar <esafar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 14:59:45 by esafar            #+#    #+#              #
#    Updated: 2022/08/09 18:41:20 by esafar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Find

SRCS = main.cpp

GCC = c++
FLAGS = -g -Wextra -Wall -Werror -std=c++98 
OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${GCC} ${FLAGS} ${OBJS} -I includes -o ${NAME}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME}

re:	fclean all

%.o: %.cpp ${INCL}
	${GCC} ${FLAGS} -c $< -o ${<:.cpp=.o}

.PHONY: all clean fclean re
