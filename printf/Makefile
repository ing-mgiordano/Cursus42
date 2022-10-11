NAME = libftprintf.a

CFILES = ft_printf.c ft_words.c ft_numbers.c

OFILES = $(CFILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARCHIVER = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OFILES)
	$(ARCHIVER) $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME) $(OFILES)

re: fclean all

.PHONY: all clean fclean re