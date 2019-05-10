#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 22:08:39 by acoulomb          #+#    #+#              #
#    Updated: 2018/04/04 15:48:43 by acoulomb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY = re all clean fclean
.SUFFIXES:

NAME = ft_display_file

SRC = display_file.c

INCLUDES = ./includes/

OBJS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@gcc $(FLAGS) -o $(NAME) $(SRC)
	@echo "tudo bem"

%.o: %.c
	@gcc $(FLAGS) -o $@ -c $^ -I $(INCLUDES)

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all