# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hseffian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 16:48:00 by hseffian          #+#    #+#              #
#    Updated: 2019/03/31 01:39:16 by hseffian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all : $(NAME)
$(NAME) :
	@gcc -c -Wall -Wextra -Werror *.c
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

re : fclean all
