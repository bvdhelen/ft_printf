# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 19:57:16 by eldiaz-c          #+#    #+#              #
#    Updated: 2024/10/25 20:02:57 by eldiaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la biblioteca
NAME = libftprintf.a

# Compilador y banderas de compilacion
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente y archivos objeto
SOURCES = ft_


OBJECTS = $(SOURCES:.c=.o)

# Archivo de encabezado
INCLUDE = libftprintf.h

# Regla por defecto que lo compila todo
all: $(NAME)

# Regla para crear la biblioteca
$(NAME): $(OBJECTS) $(INCLUDE)
		@ar rcs $(NAME) $(OBJECTS)

