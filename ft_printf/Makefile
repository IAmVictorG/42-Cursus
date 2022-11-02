# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 22:53:58 by victorgiord       #+#    #+#              #
#    Updated: 2022/10/31 23:06:17 by victorgiord      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = monprog

SRCS = $(addprefix srcs/ft_, printf.c putstr.c putnbr.c putchar.c)

OBJS = ${SRCS:.c=.o}

RM = rm

CC = gcc

INCLUDES = includes

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME} 

clean:
			${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}

re:		fclean all