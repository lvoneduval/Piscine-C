NAME=libft.a
CC=gcc -I
CFLAGS=-c
SRC=ft_putchar.c ft_putstr.c  ft_strcmp.c  ft_strlen.c ft_swap.c
OBJ=$(SRC:.c=.o)
PSRC=srcs/
PINCLUDE=includes

all: $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $^
	
%.o: $(addprefix $(PSRC), %.c)
	$(CC) $(PINCLUDE) -o $@ $<  $(CFLAGS)

clean:
	rm -rf $(OBJ)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
