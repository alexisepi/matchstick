/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

int case_flags2(const char *str, int z, long var)
{
    switch (str[z])
    {
        case 'i':
            my_putnbr(var);
            return (4);
            break;
        case '%':
            my_putchar('%');
            return (5);
            break;
        default:
            case_flags3(str, z, var);
            break;
    }
}