# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 15:40:54 by smlamali          #+#    #+#              #
#    Updated: 2024/05/03 16:19:09 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
		Intern.cpp

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJS = $(SRCS:.cpp=.o)

NAME = Intern

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