# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 15:35:55 by smlamali          #+#    #+#              #
#    Updated: 2024/06/13 16:25:11 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = ex02

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