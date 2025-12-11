NAME := main
CC := cc
CFLAGS := -Wall -Wextra -Werror

SRCS = capitalized_word.c \
		reverse_string.c \
		utils.c \
		main.c
		
OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re