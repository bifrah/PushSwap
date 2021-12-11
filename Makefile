NAME = push_swap
CC = gcc
PARAMS = -Wall -Wextra -Werror

SRC_PATH = srcs/
OBJ_PATH = obj/

INC_NAME = push_swap.h
LIBFT_LIB_PATH = ./libft/libft.a
SRC_NAME =	main.c \

OBJ_NAME= $(SRC_NAME:.c=.o)

INC= -I inc/ -I libft/
SRC= $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

DEF= \033[0m
RED= \033[31;1m
GRN= \033[32;1m
YEL= \033[33;1m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(RED)[push_swap] : $(DEF)Compilation..."
	@make -C libft
	@$(CC) $(PARAMS) $(OBJ) $(LIBFT_LIB_PATH) -o $(NAME) $(INC) -L libft/
	@echo "$(RED)[push_swap] : $(DEF)Compilation                 $(GRN)[OK]$(DEF)"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@echo "$(RED)[push_swap] :$(DEF) Compiling $@"
	@$(CC) $(PARAMS) $(INC) -o $@ -c $<

clean:
	@make -C libft clean
	@rm -rf $(OBJ_PATH)
	@echo "$(RED)[push_swap] : $(DEF)Cleaning                    $(GRN)[OK]$(DEF)"

fclean: clean
	@make -C libft fclean
	@rm -rf $(NAME)
	@echo "$(RED)[push_swap] : $(DEF)Full Cleaning               $(GRN)[OK]$(DEF)"

re: fclean all
