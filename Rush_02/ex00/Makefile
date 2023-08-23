# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahors <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 18:50:29 by ahors             #+#    #+#              #
#    Updated: 2023/08/20 19:11:54 by ahors            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = rush-02
CFLAGS = -Wall -Wextra -Werror
SRC	= rush.c
INC = ft_function.h
OBJ = $(SRC:.c=.o)

all: ${NAME}

%.o : %.c ${INC}
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) -o $@ $^

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean
