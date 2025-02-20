# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 09:55:57 by mgomes-s          #+#    #+#              #
#    Updated: 2025/02/20 16:19:06 by mgomes-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap

CC= cc

CFLAGS= -Wall -Werror -Wextra -g

SRC= main.c aux_list.c operations.c

LIB= libft/libft.a

OBJ= $(SRC:.c=.o)

GREEN=\033[0;32m
RED=\033[0;31m
RESET=\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@ make -C libft
	@ $(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIB)
	@ echo "                                   "
	@ echo "$(GREEN)✅ Build completed!$(RESET)"
	@ echo "                                   "
	@ echo "_______________________________________"
	@ echo "                Push_swap              "
	@ echo "|                                     |"
	@ echo "|                                     |"
	@ echo "|  $(RED)Repeated numbers are not allowed.$(RESET)  |"
	@ echo "|                                     |"
	@ echo "|                                     |"
	@ echo "_______________________________________"

%.o: %.c
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@ echo "                                      "
	@ echo "$(RED)🗑️  successfully deleted$(RESET)"
	@ echo "                                      "
	@ make clean -C libft

fclean: clean
	@ rm -f $(NAME)
	@ make fclean -C libft

re: fclean all
