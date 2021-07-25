/*
** EPITECH PROJECT, 2021
** my_put2d_arr
** File description:
** show 2d arr
*/

#include "my.h"
#include <stddef.h>

int my_put2d_arr(char * const *array)
{
    int i = 0;

    while (array[i]) {
        my_putstr(array[i++]);
        my_putchar('\n');
    }
    return 0;
}