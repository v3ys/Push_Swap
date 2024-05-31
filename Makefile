NAME = push_swap
SRCS = handle_errors.c init_a_to_b.c init_b_to_a.c push_swap.c push.c \
		rev_rotate.c rotate_both.c rotate.c sort_three.c sorting.c \
		stack_init.c stack_utils.c swap.c

OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/libft.a
PRINTF = ./ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(SRCS)
	@make -C ./libft -s
	@make -C ./ft_printf -s
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)
	@echo "\033[33m                 _                                 "
	@echo "\033[33m _ __  _   _ ___| |__      _____      ____ _ _ __  "
	@echo "\033[33m| '_ \| | | / __| '_ \    / __\ \ /\ / / _\` | '_ \ "
	@echo "\033[34m| |_) | |_| \__ \ | | |   \__ \\ V  V / (_| | |_) |"
	@echo "\033[34m| .__/ \__,_|___/_| |_|___|___/ \_/\_/ \__,_| .__/ "
	@echo "\033[34m|_|                  |_____|                |_|    "
	@echo "Program is ready!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C ./libft clean -s
	@make -C ./ft_printf clean -s
	@rm -rf $(OBJS)
	@echo "Object files removed!"

fclean: clean
	@make -C ./libft fclean -s
	@make -C ./ft_printf fclean -s
	@rm -rf $(NAME)
	@echo "Program is removed!"

re: fclean all

.PHONY: all clean fclean re