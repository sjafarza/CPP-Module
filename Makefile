# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saray <saray@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 14:01:10 by saray             #+#    #+#              #
#    Updated: 2022/02/05 17:15:06 by saray            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRCS_DIR = ./
SRC	=	megaphone.cpp

OBJS_DIR        =       objects/
OBJ	=	${SRC:.cpp=.o}
OBJS            =       $(addprefix $(OBJS_DIR), $(OBJ))	

CC	=	clang++

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror


all:	${NAME}

$(OBJS_DIR)%.o	:	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang++ $(CFLAGS) -c $< -o $@


${NAME}:	$(OBJS)
			@clang++ $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf  $(OBJS_DIR)

fclean: clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re


