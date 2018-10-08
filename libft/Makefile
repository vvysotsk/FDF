#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/17 16:13:18 by vvysotsk          #+#    #+#              #
#    Updated: 2018/01/17 16:13:20 by vvysotsk         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

NOC=\033[0m
OKC=\033[32m
WAC=\033[33m

SRCS = ./ft_lstdel.c \
	./ft_putchar_fd.c \
	./ft_strequ.c \
	./ft_strrchr.c \
	./ft_lstdelone.c \
	./ft_putendl.c \
	./ft_striter.c \
	./ft_strsplit.c \
	./ft_count_char.c \
	./ft_lstiter.c \
	./ft_putendl_fd.c \
	./ft_striteri.c \
	./ft_strstr.c \
	./ft_count_str.c \
	./ft_lstmap.c \
	./ft_putnbr.c \
	./ft_strjoin.c \
	./ft_strsub.c \
	./ft_find_nword.c \
	./ft_lstnew.c \
	./ft_putnbr_fd.c \
	./ft_strlcat.c \
	./ft_strtrim.c \
	./ft_atoi.c \
	./ft_memalloc.c \
	./ft_putstr.c \
	./ft_strlen.c	\
	./ft_tolower.c \
	./ft_bzero.c \
	./ft_memccpy.c \
	./ft_putstr_fd.c \
	./ft_strmap.c \
	./ft_toupper.c \
	./ft_isalnum.c \
	./ft_memchr.c \
	./ft_strcat.c \
	./ft_strmapi.c \
	./ft_int_len.c \
	./ft_isalpha.c \
	./ft_memcmp.c \
	./ft_strchr.c \
	./ft_strncat.c \
	./ft_isascii.c \
	./ft_memcpy.c \
	./ft_strclr.c \
	./ft_strncmp.c \
	./ft_save_str.c \
	./ft_isdigit.c \
	./ft_memdel.c \
	./ft_strcmp.c \
	./ft_strncpy.c \
	./ft_isprint.c \
	./ft_memmove.c \
	./ft_strcpy.c \
	./ft_strnequ.c \
	./ft_itoa.c \
	./ft_memset.c \
	./ft_strdel.c \
	./ft_strnew.c \
	./ft_lstadd.c \
	./ft_putchar.c \
	./ft_strdup.c \
	./ft_strnstr.c \
	./ft_strndup.c \
	./ft_putendl_exit.c \
	./get_next_line.c \

OBJECTS = ./ft_lstdel.o \
	./ft_putchar_fd.o \
	./ft_strndup.o \
	./ft_strequ.o \
	./ft_strrchr.o \
	./ft_lstdelone.o \
	./ft_putendl.o \
	./ft_striter.o \
	./ft_strsplit.o \
	./ft_count_char.o \
	./ft_lstiter.o \
	./ft_putendl_fd.o \
	./ft_striteri.o \
	./ft_strstr.o \
	./ft_count_str.o \
	./ft_lstmap.o \
	./ft_putnbr.o \
	./ft_strjoin.o \
	./ft_strsub.o \
	./ft_find_nword.o \
	./ft_lstnew.o \
	./ft_putnbr_fd.o \
	./ft_strlcat.o \
	./ft_strtrim.o \
	./ft_atoi.o \
	./ft_memalloc.o \
	./ft_putstr.o \
	./ft_strlen.o \
	./ft_tolower.o \
	./ft_bzero.o \
	./ft_memccpy.o \
	./ft_putstr_fd.o \
	./ft_strmap.o \
	./ft_toupper.o \
	./ft_isalnum.o \
	./ft_memchr.o \
	./ft_strcat.o \
	./ft_strmapi.o \
	./ft_int_len.o \
	./ft_isalpha.o \
	./ft_memcmp.o \
	./ft_strchr.o \
	./ft_strncat.o \
	./ft_isascii.o \
	./ft_memcpy.o \
	./ft_strclr.o \
	./ft_strncmp.o \
	./ft_save_str.o \
	./ft_isdigit.o \
	./ft_memdel.o \
	./ft_strcmp.o \
	./ft_strncpy.o \
	./ft_isprint.o \
	./ft_memmove.o \
	./ft_strcpy.o \
	./ft_strnequ.o \
	./ft_itoa.o \
	./ft_memset.o \
	./ft_strdel.o \
	./ft_strnew.o \
	./ft_lstadd.o \
	./ft_putchar.o \
	./ft_strdup.o \
	./ft_strnstr.o \
	./ft_putendl_exit.o \
	./get_next_line.o \

GCCFLAGS = gcc -Wall -Wextra -Werror

OBJ = $(SCRS:.c=.o)

all: $(NAME)

$(NAME):
			@$(GCCFLAGS) -c $(SRCS)
			@ar rc $(NAME) $(OBJECTS)
			@echo "$(OKC)LIBFT:\t\tyour libft is ready$(NOC)"

clean:
			@rm -f $(OBJECTS)
			@echo "$(WAC)LIBFT:\t\tRemoving OBJ$(NOC)"

fclean: clean
			@rm -f $(NAME)
			@echo "$(WAC)LIBFT:\t\tRemoving libft$(NOC)"

re: fclean all

.PHONY: clean fclean re
