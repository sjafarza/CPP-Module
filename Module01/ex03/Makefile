NAME	=	Violence

VPATH	=	src
OBJDIR	=	obj
INCDIR	=	inc 

SRC 	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ 	=	$(SRC:%.cpp=$(OBJDIR)/%.o)

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
INCFLAGS	=	-I./$(INCDIR)

RM		=	rm -rf 
UNAME	:=	$(shell uname -s)

all:	$(NAME)

$(OBJDIR)/%.o:	%.cpp | $(OBJDIR)
				@clang++ $(CFLAG) $(INCFLAG) -c $< -o $@

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
				
fclean:			clean
				@rm -rf $(NAME) $(OBJDIR)
				
re:				fclean all

.PHONY:			all clean fclean re



