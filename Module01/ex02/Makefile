NAME	=	Brain

VPATH	=	src
OBJDIR	=	obj
INCDIR	=	inc 

SRC 	=	main.cpp 
OBJ 	=	$(SRC:%.cpp=$(OBJDIR)/%.o)

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCFLAGS	=	-I./$(INCDIR)

RM		=	rm -rf 
UNAME	:=	$(shell uname -s)

all:	$(NAME)

$(OBJDIR)/%.o:	%.cpp | $(OBJDIR)
				@c++ $(CFLAG) $(INCFLAG) -c $< -o $@

$(NAME):		$(OBJ)
				@echo "\033[032m\n\nCompiling Brain... "
				@c++ $(CFLAGS) -o $@ $^ $(LFLAGS)
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



