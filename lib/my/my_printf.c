/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

int my_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);

    if ( str == 0)
        return (-1);
    for (int z = 0; str[z] != '\0'; z++) {
        if (str[z] != '%')
            my_putchar(str[z]);
        else {
            z++;
            case_flags(str, z, va_arg(args, long));
        }
    }
    va_end(args);
    return (0);
}