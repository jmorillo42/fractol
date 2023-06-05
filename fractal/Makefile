
NAME			=	../lib/libfractal.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS 		=	rcs
RM				=	rm -rf

SRC_DIR			=	src
SRCS			=	fr_burningship.c \
					fr_create.c \
					fr_dec_bright.c \
					fr_dec_c_real.c \
					fr_dec_c_img.c \
					fr_dec_cursor_zoom.c \
					fr_dec_hue.c \
					fr_dec_iter.c \
					fr_dec_saturation.c \
					fr_dec_static_zoom.c \
					fr_destroy.c \
					fr_inc_bright.c \
					fr_inc_c_real.c \
					fr_inc_c_img.c \
					fr_inc_cursor_zoom.c \
					fr_inc_hue.c \
					fr_inc_iter.c \
					fr_inc_saturation.c \
					fr_inc_static_zoom.c \
					fr_init.c \
					fr_iteration.c \
					fr_julia.c \
					fr_mandelbrot.c \
					fr_move_down.c \
					fr_move_left.c \
					fr_move_right.c \
					fr_move_up.c \
					fr_paint.c \
					fr_pixel_color.c \
					fr_reset.c \
					fr_set.c

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
					@echo Cleaning libfractal
					@$(RM) $(OBJ_DIR)

fclean:				clean
					@$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
