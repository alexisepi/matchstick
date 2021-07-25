/*
** EPITECH PROJECT, 2021
** update_map
** File description:
** matchstick
*/
#include "my.h"
#include "match.h"

void update_map( map_t *grid, int line, int matches)
{
    int a = my_strlen(grid->map[line]);

    for (; grid->map[line][a] != '|'; a --);
    for (int i = 0; i != matches; i++) {
        grid->map[line][a] = ' ';
        a--;
    }
}