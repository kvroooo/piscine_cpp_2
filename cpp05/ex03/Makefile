# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 15:40:54 by smlamali          #+#    #+#              #
#    Updated: 2024/05/28 17:23:17 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

OBJS = $(SRCS:.cpp=.o)

NAME = intern

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