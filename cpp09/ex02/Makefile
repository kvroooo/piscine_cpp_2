
SRCS = main.cpp PmergeMe.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = merge

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all