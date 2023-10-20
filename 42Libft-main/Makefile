# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-n <amunoz-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 20:05:28 by amunoz-n          #+#    #+#              #
#    Updated: 2023/10/12 17:02:23 by amunoz-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
	  ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcat.c\
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c\
	  ft_tolower.c ft_toupper.c ft_memset.c ft_strchr.c\
	  ft_strnstr.c ft_atoi.c\


NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Wend

CLEAN = rm -Rf

OBJS := $(SRC:.c=.o)

all: $(NAME)

$(NAME): %.o
	@ar rcs $(NAME) $(OBJS) 
%.o:
	@$(CC) $(CFLAGS) -c $(SRC)

clean:
	@$(CLEAN) ./*.o

fclean: clean
	@$(CLEAN) ./*.a

re: fclean all

.PHONY: all clean fclean re
