NAME = Malloc

FTC2 =	ft_main.c

FTC =	$(subst ft_,src/ft_,$(FTC2))

FTO = $(subst .c,.o,$(FTC))

FTO2 = $(subst .c,.o,$(FTC2))

.PHONY: all re clean fclean

all: lib $(NAME)

$(NAME): $(FTO)
	@gcc -o $(NAME) $(FTO2) libft/libft.a
	@echo "\033[32m\nClient created!\033[0m"

%.o: %.c
	@gcc -Wall -Wextra -Werror -I./libft/includes -I./src/includes -c $<
	@echo "\033[33m.\033[0m\c"
	
lib:
	@make -C libft

clean:
	@make -C libft clean
	@rm -rf $(FTO2)
	@echo "\033[33m$(NAME) object deleted!\033[0m"

fclean: clean
	@make -C libft fcleana
	@rm -rf $(NAME)
	@echo "\033[31m$(NAME) deleted!\033[0m"

re: fclean all
