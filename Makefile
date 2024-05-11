# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpere <vpere@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/01 19:12:29 by vpere             #+#    #+#              #
#    Updated: 2024/05/11 16:29:33 by vpere            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC =  ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_tolower.c\
		ft_isdigit.c  ft_memcpy.c ft_toupper.c ft_strchr.c\
		ft_memset.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
		ft_strlcpy.c ft_strlen.c ft_memcmp.c ft_memmove.c ft_strnstr.c\
		ft_isprint.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
    	ft_strjoin.c ft_strtrim.c **ft_split.c ft_itoa.c ft_strmapi.c\
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c\

OBJ = $(SRC:.c=.o)

AR		=	@ar -rc

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) ${OBJ}

$(OBJ) :
	$(CC) $(CFLAGS) -c $(@:.o=.c)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)


re : fclean $(NAME)

.PHONY: all fclean clean re
