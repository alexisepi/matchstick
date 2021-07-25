/*
** EPITECH PROJECT, 2021
** player_turn
** File description:
** matchstick
*/
#include "my.h"
#include "match.h"

static int ask_info(int *matches , map_t *grid, int max_matches, int *line)
{
    int match_out = 0;

    *line = askline(*line, *grid);
    if (*line == -1)
        return -1;
    match_out = askmatches(matches, *grid, *line, max_matches);
    if (match_out == -2)
        return -1;
    while (match_out == -1) {
        *line = askline(*line, *grid);
        if (*line == -1)
            return -1;
        match_out = askmatches(matches, *grid, *line, max_matches);
        if (match_out == -2)
            return -1;
        clear_in(&grid->stdline);
    }
    return 0;
}

int player_turn(map_t *grid, int max_matches)
{
    int matches = 0;
    int line = 0;

    my_printf("Your turn:\n");
    if (ask_info(&matches, grid, max_matches, &line) == -1)
        return -1;
    my_printf("Player removed %d match(es) from line %d\n", matches, line);
    update_map(grid, line, matches);
    my_put2d_arr(grid->map);
    my_putchar('\n');
    free(grid->stdline);
    grid->stdline = NULL;
    return 0;
}