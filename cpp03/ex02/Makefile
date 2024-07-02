NAME = fragTrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
RM = rm -rf

# Colors
GREEN = \033[92m
YELLOW = \033[93m
GRAY = \033[33m
RESET = \033[0m
CURSIVE = \033[33;3m

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp
INCLUDE = -I./
OBJS_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

all: $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@printf "$(CURSIVE)$(GRAY) 	- Created $(OBJS_DIR) directory... $(RESET)\n"

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $<... $(RESET)\n"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	@printf "$(CURSIVE)$(GRAY) 	- Linking $(NAME)... $(RESET)\n"
	@$(CC) $(CFLAGS) $(INCLUDE) $^ -o $@
	@printf "$(GREEN)    - Executable ready.$(RESET)\n"

clean:
	@$(RM) $(OBJS_DIR)
	@printf "$(YELLOW)    - Objects files removed. $(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed. $(RESET)\n"

re: fclean all

.PHONY: all clean fclean re

