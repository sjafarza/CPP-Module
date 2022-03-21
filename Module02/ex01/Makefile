NAME		=	canon

VPATH		=	src
OBJDIR		=	obj
INCLDIR		=	inc 

SRC 		=	main.cpp Fixed.cpp

OBJ 		=  	$(SRC:%.cpp=$(OBJDIR)/%.o)

CC			=	c++
CFLAG		=	-Wall -Wextra -Werror -std=c++98
INCFLAGS	=	-I ./Fixed.hpp

RM			=	rm -rf
UNAME           :=      $(shell uname -s)

all:			$(NAME)
$(OBJDIR)/%.o:	%.cpp | $(OBJDIR)
					@c++ $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJ)
				@echo "\033[032m\n\nCompiling canon... "
				@c++ $(CFLAGS) -o $@ $^ $(LFLAGS)
				@echo "\n\033[0mDone !"

$(OBJDIR):
				@echo "\033[0;33mGenerating bin folder "
				mkdir $(OBJDIR)


clean:
				@echo "\033[0;31m\nDeleting objects ..."
				@rm $(OBJ)
				@echo "\033[0m"

fclean:			clean
				@rm -rf $(NAME) $(OBJDIR)

re:				fclean all

.PHONY:			all clean fclean re
