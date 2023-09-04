# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nope <nope@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 16:45:27 by nope              #+#    #+#              #
#    Updated: 2023/09/04 17:20:15 by nope             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

SRC = ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strrchr.c \
	ft_strncpy.c \
	ft_strndup.c \
	ft_newstr.c \
	ft_abs.c \
	ft_countwords.c \
	ft_intlen.c \
	ft_isblank.c \
	ft_iscntrl.c \
	ft_isgraph.c \
	ft_islower.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_isxdigit.c \
	ft_newstr.c \
	ft_power.c \
	ft_str_is_alpha.c \
	ft_str_is_lowercase.c \
	ft_str_is_digit.c \
	ft_str_is_printable.c \
	ft_str_is_uppercase.c \
	ft_strcapitalize.c \
	ft_strcasecmp.c \
	ft_strcasestr.c \
	ft_strlowcase.c \
	ft_strncasecmp.c \
	ft_strstrupcase.c \
	ft_strtok.c \
	ft_strcmp.c \
	ft_str_is_unique_chars.c \
	ft_striteri.c
	
SRC_BONUS = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${SRC_BONUS:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all