NAME=ft_tail
CC=gcc 
CFLAGS=-Wall -Werror -Wextra -o
SRC=ft.c main.c

all: $(NAME)

$(NAME) :
	$(CC)   $(CFLAGS) $@ $(SRC)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
