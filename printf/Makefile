NAME = libftprintf.a

CFILES = ft_printf.c

OBJS = $(CFILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARCHIVER = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCHIVER) $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME) $(OFILES)

re: fclean all

.PHONY: all clean fclean re