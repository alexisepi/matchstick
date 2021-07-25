/*
** EPITECH PROJECT, 2021
** ia_turn.c
** File description:
** matchstick
*/
#include "my.h"
#include "match.h"

void ia_turn(map_t *grid, int max_matches)
{
    my_printf("AI's turn...\n");
    int line = 0;
    int matches = 0;

    xorthis(grid, max_matches,&line, &matches);
    my_printf("AI removed %d match(es) from line %d\n", matches, line);
    update_map(grid, line, matches);
    my_put2d_arr(grid->map);
    my_putchar('\n');
}