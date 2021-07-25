/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

int case_flags3(const char *str, int z, long var)
{
    switch (str[z])
    {
        case 'u':
            my_put_unsigned_int(var);
            return (1);
            break;
        case 'p':
            my_putstr("0x");
            my_putnbr(var);
            return (2);
            break;
        default:
            my_putchar(str[z - 1]);
            my_putchar(str[z]);
            return (84);
            break;
    }
}