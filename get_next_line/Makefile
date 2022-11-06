# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 13:36:14 by victorgiord       #+#    #+#              #
#    Updated: 2022/11/06 00:12:49 by victorgiord      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = get_next_line.c get_next_line_utils.c main.c

OBJS = ${SRCS:.c=.o}

NAME = programme

RM = rm

CC = gcc

INCLUDES = get_next_line.h

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} 

all:		${NAME} 

clean:
		-${RM} ${OBJS}

fclean:	clean
		-${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re