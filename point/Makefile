# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 14:30:48 by jmorillo          #+#    #+#              #
#    Updated: 2022/11/29 11:26:53 by jmorillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	../lib/libpoint.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf

SRC_DIR			=	src
SRCS			=	pt_create.c \
					pt_destroy.c

OBJ_DIR			=	obj
OBJS			=	$(SRCS:%.c=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c
					@$(CC) $(CFLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJ_DIR) $(OBJS)
					@$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJ_DIR):
					@mkdir -p $(OBJ_DIR)

clean:
					@echo Cleaning libpoint
					@$(RM) $(OBJ_DIR)

fclean:				clean
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
