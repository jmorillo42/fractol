# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 18:11:03 by jmorillo          #+#    #+#              #
#    Updated: 2022/11/29 11:26:48 by jmorillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	fractol
CC			=	gcc
CC_FLAGS	=	-Wextra -Wall -Werror -Wunreachable-code -Ofast
MLX_DIR		=	./mlx42
CX_DIR		=	./complex
PT_DIR		=	./point
FT_DIR		=	./ft
FR_DIR		=	./fractal
LIB_DIR		=	./lib
HEADERS		=	-I ./include \
				-I $(MLX_DIR)/include/MLX42 \
				-I ./fractal/include \
				-I ./ft/include \
				-I ./point/include \
				-I ./complex/include
#LIBS		=	$(LIB_DIR)/libfractal.a $(LIB_DIR)/libmlx42.a $(LIB_DIR)/libft.a $(LIB_DIR)/libpoint.a $(LIB_DIR)/libcomplex.a -ldl -lglfw -pthread -lm
LIBS		=	$(LIB_DIR)/libfractal.a $(LIB_DIR)/libmlx42.a $(LIB_DIR)/libft.a $(LIB_DIR)/libpoint.a $(LIB_DIR)/libcomplex.a -ldl -lglfw -L "/Users/$(USER)/.brew/opt/glfw/lib/" -pthread -lm
SRCS		=	./src/fractol.c \
				./src/hooks.c \
				./src/print_help.c \
				./src/print_warning.c \
				./src/read_args.c
OBJS		=	${SRCS:.c=.o}
BONUS		=	fractol_bonus
SRCS_BONUS	=	./bonus/fractol_bonus.c \
				./bonus/hooks_bonus.c \
				./bonus/print_help_bonus.c \
				./bonus/print_warning_bonus.c \
				./bonus/read_args_bonus.c
OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

all: libs $(NAME)

$(NAME): $(OBJS) ./include/fractol.h
	@$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)

bonus: libs $(BONUS)

$(BONUS):	$(OBJS_BONUS) ./include/fractol_bonus.h
	@$(CC) $(OBJS_BONUS) $(LIBS) $(HEADERS) -o $(NAME)

libs:
	@mkdir -p $(LIB_DIR)
	@$(MAKE) -C $(MLX_DIR)
	@mv $(MLX_DIR)/libmlx42.a $(LIB_DIR)
	@$(MAKE) -C $(CX_DIR)
	@$(MAKE) -C $(PT_DIR)
	@$(MAKE) -C $(FT_DIR)
	@$(MAKE) -C $(FR_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<)"

clean:
	@echo Cleaning
	@rm -f $(OBJS)
	@rm -f $(OBJS_BONUS)
	@$(MAKE) -C $(MLX_DIR) clean
	@$(MAKE) -C $(CX_DIR) clean
	@$(MAKE) -C $(PT_DIR) clean
	@$(MAKE) -C $(FT_DIR) clean
	@$(MAKE) -C $(FR_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(LIB_DIR)

re: clean all

.PHONY: all, bonus, clean, fclean, re
