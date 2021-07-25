/*
** EPITECH PROJECT, 2021
** clear stdline
** File description:
** clear_in
*/

#include "my.h"
#include "match.h"

void clear_in(char **stdline)
{
    if (*stdline) {
        free(stdline);
        stdline = NULL;
    }
}