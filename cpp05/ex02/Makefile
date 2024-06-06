# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 15:40:54 by smlamali          #+#    #+#              #
#    Updated: 2024/06/06 14:39:55 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp
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