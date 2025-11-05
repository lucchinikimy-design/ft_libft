NAME = LIBFT

SRC = main.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_memmove.c \
	  ft_strlen.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strlcpy.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -fsanitize=address,undefined,leak -g3

$(NAME) : $(OBJ)
# 	ar rcs $(NAME) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
