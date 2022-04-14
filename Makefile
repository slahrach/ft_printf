# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 00:02:19 by slahrach          #+#    #+#              #
#    Updated: 2021/12/08 23:41:32 by slahrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = aff_char.c aff_str.c aff_base10.c aff_unsigned.c aff_base16.c \
		aff_pointer.c ft_printf.c

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs

all : ${NAME}

${NAME} : ${OBJ}
	${AR} ${NAME} ${OBJ}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
	
.PHONY: clean all fclean re
