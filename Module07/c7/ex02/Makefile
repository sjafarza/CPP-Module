NAME = array

CXX				=	c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
RM				=	rm -rf
HEADER			=	-I.
DEPS			= Array.hpp
SRCS 			= main.cpp
OBJ 			= $(SRCS:.cpp=.o)

%.o: %.cpp $(DEPS) 
	${CXX} $(HEADER) ${CXXFLAGS} -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(HEADER) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re