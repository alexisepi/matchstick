/*
** EPITECH PROJECT, 2020
** my_putbr.c
** File description:
** display entered nbr.
*/
#include "my.h"

int calcul(int nb, int z)
{
    if (nb >= 10) {
        z = nb % 10;
        nb = nb / 10;
        my_putnbr(nb);
        my_putchar(48 + z);
    }
    else {
        my_putchar(48 + nb % 10);
    }
}

int  my_putnbr(int nb)
{
    int z;

    if (nb <= -2147483648 || nb >= 2147483647) {
        if (nb <= -2147483648)
            my_putstr("-2147483648");
        if (nb >= 2147483647)
            my_putstr("2147483647");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        calcul(nb, z);
    }
    return (0);
}