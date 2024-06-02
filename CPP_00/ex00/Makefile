NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

# Colors
GREEN = \033[92m
YELLOW = \033[93m
GRAY = \033[33m
RESET = \033[0m
CURSIVE = \033[33;3m


all: $(NAME)

$(NAME): main.cpp
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(CFLAGS) $< -o $@
	@printf "$(GREEN)    - Executable ready.$(RESET)\n"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re