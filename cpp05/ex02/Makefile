SRCS =	main.cpp Bureaucrat.cpp AForm.cpp
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

OBJS = $(SRCS:.cpp=.o)

NAME = ex02

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