# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 20:02:57 by ouamarko          #+#    #+#              #
#    Updated: 2025/10/27 14:22:13 by ouamarko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	= fdf

SRC	= fdf.c \
	  utils/ft_split.c \
	  utils/ft_lenght.c \
	  utils/ft_atoi.c \
	  $(GNL_DIR)/get_next_line.c \
	  $(GNL_DIR)/get_next_line_utils.c \

INCLUDES = includes/fdf.h

OBJS	= ${SRC:.c=.o}

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -g -Iinculdes
MLX_PATH = ./minilibx-linux
MLX_FLAGS = -L$(MLX_PATH) -lm -lmlx -lXext -lX11
GNL_DIR = ./gnl
INC_DIR = ./includes

all: ${NAME}

${MLX_PATH}/libmlx.a:
	@make -C ${MLX_PATH}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} $(MLX_FLAGS) -o ${NAME}
	${MLX_PATH}/libmlx.a
	@echo "Compil done ✅"

%.o: %.c
	${CC} ${CFLAGS} -I$(MLX_PATH) -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME} ${OBJS}

re: fclean all

.PHONY: all bonus clean fclean re
