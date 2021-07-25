/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** returns if string is numeric
*/

#include <stddef.h>
#include "my.h"

int my_str_isnum(char const *str)
{
    for (size_t i = 0; i < (my_strlen(str) - 1); i++) {
        if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '-'))
            return 0;
    }
    return 1;
}
