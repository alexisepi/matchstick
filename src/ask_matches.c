/*
** EPITECH PROJECT, 2021
** ask_matches
** File description:
** matchstick
*/
#include "my.h"
#include "match.h"

int matches_howmany(char *str)
{
    int matches = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '|' && str[i])
            matches++;
    return matches;
}

static int error_handling(int matches, int line, map_t grid, int max_matches)
{
    if (my_str_isnum(grid.stdline) == 0 || matches < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return -1;
    }
    if (matches > matches_howmany(grid.map[line])) {
        my_putstr("Error: not enough matches on this line\n");
        return -1;
    }
    else if (matches < 1) {
        my_putstr("Error: you have to remove at least one match\n");
        return -1;
    }
    if (matches > max_matches) {
        my_printf("Error: you cannot remove more than %d matches per turn\n",
            max_matches);
        return -1;
    }
    return 0;
}

int askmatches(int *matches, map_t grid, int line, int max_matches)
{
    int get_out = 0;

    my_putstr("Matches: ");
    clear_in(&grid.stdline);
    if ((get_out = getline(&grid.stdline, &grid.len, stdin)) == -1 || !get_out)
        return -2;
    *matches = my_getnbr(grid.stdline);
    if (error_handling(*matches, line, grid, max_matches) == -1)
        return -1;
    return *matches;
}