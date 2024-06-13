# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 17:10:21 by smlamali          #+#    #+#              #
#    Updated: 2024/06/13 17:12:39 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = main.cpp

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = ex00

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