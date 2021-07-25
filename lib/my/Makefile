##
## EPITECH PROJECT, 2021
## libmy.a
## File description:
## Makefile
##

SRC		=	./my_strupcase.c \
		./my_strncpy.c \
		./my_strncat.c \
		./my_strlowcase.c \
		./my_strlen.c \
		./my_str_isupper.c \
		./my_str_isprintable.c \
		./my_str_isnum.c \
		./my_str_islower.c \
		./my_str_isalpha.c \
		./my_strcpy.c \
		./my_strcmp.c \
		./my_strcat.c \
		./my_strcapitalize.c \
		./my_sort_int_array.c \
		./my_putstr.c \
		./my_putnbr.c \
		./my_putchar.c \
		./my_isprime.c \
		./my_isneg.c \
		./my_find_prime_sup.c \
		./my_getnbr.c \
		./my_putnbr_base.c \
		./my_uputnbr_base.c \
		./my_swap.c \
		./my_strdup.c \
		./my_strndup.c \
		./split_string.c \
		./mem_alloc_2d_array.c \
		./my_put2d_arr.c \
		./case_flags.c \
		./case_flags2.c \
		./case_flags3.c \
		./my_printf.c \
		./my_put_unsigned_int.c

NAME	=	libmy.a

NAME	=	libmy.a

OBJ = 	$(SRC:.c=.o)

CFLAGS	=	-I include/ -g

$(NAME):	$(OBJ)
		cp include/my.h ../../include
		@ar rc $(NAME) $(OBJ)
		cp $(NAME) ../

all: 	$(NAME)

clean:
	rm -f $(OBJ)
	rm -f lib/$(OBJ)
	rm -f *.c~
	rm -f lib/*.c~
	rm -f *.gcno
	rm -f *.gcda

fclean:	clean
	rm -f $(NAME)
	rm -f my_defender

re:	fclean all