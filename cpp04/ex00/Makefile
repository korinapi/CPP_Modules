NAME = polymorphism
CC = c++
CFLAGS = -Wall -Wextra -std=c++98 -fsanitize=address -g
RM = rm -rf

# Colors
GREEN = \033[92m
YELLOW = \033[93m
GRAY = \033[33m
RESET = \033[0m
CURSIVE = \033[33;3m

SRCS = main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp
INCLUDE = -I.

all: $(NAME)

$(NAME): $(SRCS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(CFLAGS) $(INCLUDE) $^ -o $@
	@printf "$(GREEN)    - Executable ready.$(RESET)\n"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
