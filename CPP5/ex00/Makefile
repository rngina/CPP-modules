NAME = bureaucrat
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -I ./includes
SRC = src/main.cpp src/Bureaucrat.cpp
OBJ = $(SRC:src/%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

obj/%.o: src/%.cpp
	mkdir -p obj
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	rm -rf obj

fclean: clean
	rm -f obj

re: fclean all

.PHONY: all clean fclean re