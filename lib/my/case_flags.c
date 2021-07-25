/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

int case_flags(const char *str, int z, long var)
{
    switch (str[z])
    {
        case 's':
            my_putstr((char *) var);
            return (1);
            break;
        case 'd':
            my_putnbr(var);
            return (2);
            break;
        case 'c':
            my_putchar(var);
            return (3);
            break;
        default:
            case_flags2(str, z, var);
            break;
    }
}
