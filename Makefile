## EPITECH PROJECT, 2020
## makefile d10
## File description:
## makefile for libmy
##

SRC		=	src/core.c \
			src/ask_line.c \
			src/ask_matches.c \
			src/ask_size.c \
			src/init_map.c \
			src/my_load_map.c \
			src/player_turn.c \
			src/update_map.c \
			src/end_screen.c \
			src/ia_turn.c \
			src/clear_in.c \
			src/xor_algo.c \

NAME	=	matchstick

OBJ	=	$(SRC:.c=.o)

CFLAGS =	-I include -L lib/my -lmy -Wall -Wextra

$(NAME):	$(OBJ)
	@(make -C lib/my) > compil_lib
	@(gcc $(OBJ) -o $(NAME) $(CFLAGS) $(CFLAGS2))

all:	$(NAME)

clean:	
	@(make clean -C lib/my) > compil_lib
	@(rm -f $(OBJ)) > compil_lib
	@(rm -f vgcore.*) > compil_lib 
	@(rm -f compil_lib)

fclean:	clean
	@(make fclean -C lib/my) > compil_lib
	@(rm -f $(NAME)) > compil_lib
	@(rm -f compil_lib)

re:	fclean all

git update:	
	git add -A
	git commit -m "UPDATE"
	git push

debug:	CFLAGS += -g
debug:	re