
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
LIB_CC		=	ar -rcs

NAME		=	libft.a

SRC			=	ft_atoi.c ft_bzero.c

OBJ			=	$(SRC:%.c=%.o)

$(NAME):	$(OBJ)
	$(LIB_CC) $(NAME) $(OBJ)

%.o:	%.c
	$(CC) $(FLAGS) -c $< -o $@


execute: ft_strrchr.c
	$(CC) $(FLAGS) $< -o debug.out
	./debug.out

normi:
	norminette

hola: 
	echo adios


full	= dado

holacaracola: hola
	echo "caracola"


${full}:
	echo "este es el código de ${full}"
