NAME		=	BraiiiiiiinnnzzzZ

VPATH		=	src
OBJDIR		=	obj
INCLDIR		=	inc 

SRC 		=	main.cpp randomChump.cpp newZombie.cpp ClassZombie.cpp

OBJ 		=  	$(SRC:%.cpp=$(OBJDIR)/%.o)

CC			=	clang++
CFLAG		=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
INCFLAGS	=	-I./$(INCLDIR)

RM			=	rm -rf
UNAME           :=      $(shell uname -s)

all:			$(NAME)
$(OBJDIR)/%.o:	%.cpp | $(OBJDIR)
					@clang++ $(CFLAGS) $(INCFLAGS) -c $< -o $@

$(NAME):		$(OBJ)
				@echo "\033[032m\n\nCompiling PhoneBook... "
				@clang++ $(CFLAGS) -o $@ $^ $(LFLAGS)
				@echo "\n\033[0mDone !"

$(OBJDIR):
				@echo "\033[0;33mGenerating bin folder "
				mkdir $(OBJDIR)

bonus:			@make all

clean:
				@echo "\033[0;31m\nDeleting objects ..."
				@rm $(OBJ)
				@echo "\033[0m"

fclean:			clean
				$(RM) $(NAME) $(OBJDIR)

re:				fclean all

.PHONY:			all clean fclean re
