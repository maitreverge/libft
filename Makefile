NAME = libft.a
CC = gcc
LIB = libft.h
CFLAGS = -Wall -Wextra -Werror -include $(LIB)

SRC_PART_1 = $(wildcard part_1/*.c)
SRC_PART_2 = $(wildcard part_2/*.c)
SRC_MY_FUNCTIONS = $(wildcard my_functions/*.c)
SRC_BONUS = $(wildcard bonus/*.c)

STD_SRC = $(SRC_PART_1) $(SRC_PART_2) $(SRC_MY_FUNCTIONS)
ALL_SRC = $(SRC_PART_1) $(SRC_PART_2) $(SRC_MY_FUNCTIONS) $(SRC_BONUS)

OBJ_PART_1 = $(patsubst part_1/%.c, objects/%.o, $(SRC_PART_1))
OBJ_PART_2 = $(patsubst part_2/%.c, objects/%.o, $(SRC_PART_2))
OBJ_MY_FUNCTIONS = $(patsubst my_functions/%.c, objects/%.o, $(SRC_MY_FUNCTIONS))
OBJ_BONUS = $(patsubst bonus/%.c, objects/%.o, $(SRC_BONUS))

STD_OBJ = $(OBJ_PART_1) $(OBJ_PART_2) $(OBJ_MY_FUNCTIONS)
ALL_OBJ = $(OBJ_PART_1) $(OBJ_PART_2) $(OBJ_MY_FUNCTIONS) $(OBJ_BONUS)

all : $(NAME)

$(NAME) : $(STD_OBJ)
	ar rc $(NAME) $(STD_OBJ)

bonus : $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)

objects/%.o : part_1/%.c | objects
	$(CC) $(CFLAGS) -c $< -o $@

objects/%.o : part_2/%.c | objects
	$(CC) $(CFLAGS) -c $< -o $@

objects/%.o : my_functions/%.c | objects
	$(CC) $(CFLAGS) -c $< -o $@

objects/%.o : bonus/%.c | objects
	$(CC) $(CFLAGS) -c $< -o $@

objects :
	mkdir -p objects

clean :
	rm -rf objects

fclean : clean
	rm -f $(NAME)

re : fclean all
