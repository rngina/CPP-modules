NAME = claptrap
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -I ./includes
SRC = src/main.cpp src/ClapTrap.cpp
OBJ = $(SRC:src/%.cpp=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

obj/%.o: src/%.cpp
	@mkdir -p obj
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re