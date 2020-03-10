# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hseffian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 12:14:58 by hseffian          #+#    #+#              #
#    Updated: 2019/11/07 12:15:00 by hseffian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls
LIBFT_PATH = ./libft/
SRC = main.c option.c show_detail.c
		
OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJ)
	@make -C $(LIBFT_PATH)
	@gcc $(OBJ) $(LIBFT_PATH)/libft.a -o $(NAME)
$(OBJ): %.o : %.c
	@gcc $(FLAGS) -c $< -o $@
clean:
	@make -C $(LIBFT_PATH) clean
	@rm -rf $(OBJ)
fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@rm -rf $(NAME)
re: fclean all
