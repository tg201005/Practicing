NAME = a.out

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
	Fixed.cpp\
	Point.cpp\
	bsp.cpp




OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re