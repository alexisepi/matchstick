/*
** EPITECH PROJECT, 2021
** ask_size
** File description:
** matchstick
*/
#include "match.h"

map_t ask_size(map_t grid, int size)
{
    grid.col = (size * 2) + 1;
    grid.row = size + 2;
    return grid;
}