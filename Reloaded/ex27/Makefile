# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsilva-n <nsilva-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 14:50:27 by nsilva-n          #+#    #+#              #
#    Updated: 2024/10/23 12:03:47 by nsilva-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)
OBJS = ${SRCS:.c=.o}
NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror

$(NAME):
	cc $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
