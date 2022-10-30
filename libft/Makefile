# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victorgiordani01 <victorgiordani01@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 11:24:17 by vgiordan          #+#    #+#              #
#    Updated: 2022/10/30 22:16:05 by victorgiord      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
		$(addprefix srcs/str/ft_, split.c strlen.c strchr.c strdup.c striteri.c strjoin.c strlcat.c strlcpy.c strmapi.c strncmp.c strnstr.c strrchr.c strtrim.c substr.c) \
		$(addprefix srcs/memory/ft_, memset.c memmove.c memcpy.c memcmp.c memchr.c calloc.c bzero.c) \
		$(addprefix srcs/fd/ft_, putchar_fd.c putendl_fd.c putnbr_fd.c putstr_fd.c) \
		$(addprefix srcs/alphanum/ft_, atoi.c isalnum.c isalpha.c isascii.c isdigit.c isprint.c itoa.c tolower.c toupper.c)

OBJS = ${SRCS:.c=.o}

BONUSSRCS = $(addprefix srcs/bonus/ft_, lstnew.c)

BONUSOBJS = ${BONUSSCRS:.c=.o}

NAME = libft.a

RM = rm

CC = gcc

INCLUDES = includes

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS} 

all:		${NAME} 

clean:
		-${RM} ${OBJS}

fclean:	clean
		-${RM} ${NAME}

re:		fclean all

bonus: ${OBJS} ${BONUSOBJS}
		ar -rcs ${NAME} ${OBJS} ${BONUSOBJS}

.PHONY: all clean fclean re bonus