NAME = materia

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 
INC = -Iinc

SRCDIR = src/
SRCS =	main.cpp \
				AMateria.cpp \
				Ice.cpp \
				Cure.cpp \
				Character.cpp \
				MateriaSource.cpp \
			

OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR),$(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	@echo "\033[032m\n\nCompiling canon... "
	@c++ $(CXXFLAGS) $(INC) $(OBJ) -o $(NAME)
	@echo "\n\033[0mDone !"

$(OBJDIR):
	@echo "\033[0;33mGenerating bin folder "
	mkdir -p $@

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@c++ $(CXXFLAGS) $(INC) -c $< -o $@

clean:
	@echo "\033[0;31m\nDeleting objects ..."
	@rm -rf $(OBJDIR)
	@echo "\033[0m"

fclean: clean
	@rm -rf $(NAME) a.out
	@echo "\033[0;31m\nDone !"

re: clean fclean all

