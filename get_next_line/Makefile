# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgiordan <vgiordan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 13:36:14 by victorgiord       #+#    #+#              #
#    Updated: 2022/11/07 14:16:27 by vgiordan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = get_next_line.c get_next_line_utils.c main.c

OBJS = ${SRCS:.c=.o}

NAME = programme

RM = rm

CC = gcc

INCLUDES = r

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} 

all:		${NAME} 

clean:
		-${RM} ${OBJS}

fclean:	clean
		-${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re