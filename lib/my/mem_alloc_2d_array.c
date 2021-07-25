/*
** EPITECH PROJECT, 2020
** mem alloc 2d array
** File description:
** bsbsq
*/
#include <stdlib.h>

char **mem_alloc_2d_array(int letter, int strings)
{
    char **arr = malloc(sizeof(char *) * (strings + 1));

    arr[strings] = NULL;
    if (!(arr))
        return NULL;
    for (int i = 0; i < strings; i++) {
        arr[i] = malloc(sizeof(char) * (letter + 1));
        if (!(arr[i]))
            return NULL;
        arr[i][strings] = '\0';
    }
    return arr;
}
