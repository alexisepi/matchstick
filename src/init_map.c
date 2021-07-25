/*
** EPITECH PROJECT, 2021
** init_map_t
** File description:
** matchstick
*/
#include "my.h"
#include "match.h"

map_t init_map(void)
{
    map_t new = {0};

    new.row = 0;
    new.col = 0;
    new.stdline = NULL;
    return new;
}