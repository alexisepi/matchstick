/*
** EPITECH PROJECT, 2020
** my_unsigned_int.c
** File description:
** my_unsigned_int
*/

#include "my.h"

int my_put_unsigned_int(unsigned int nbr)
{
    unsigned int it;

    if (nbr > 9)
        my_putnbr(nbr / 10);
    it = nbr % 10 + 48;
    my_putchar(it);
    return (0);
}