/*
** EPITECH PROJECT, 2021
** ask_line
** File description:
** matchstick
*/
#include "match.h"
#include "my.h"

int line_howmany(map_t grid, int line)
{
    int count = 0;

    for (int i = 0; i < grid.col ; i ++) {
        if (grid.map[line][i] == '|')
            count++;
    }
    return count;
}

int askline(int line, map_t grid)
{
    int get_out = 0;

    my_putstr("Line: ");
    get_out = getline(&grid.stdline, &grid.len, stdin);
    if (get_out == -1 || get_out == 0)
        return -1;
    line = my_getnbr(grid.stdline);
    if (my_str_isnum(grid.stdline) == 0 || line < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return line = askline(line, grid);
    }
    else if (line < 1 || line > grid.row - 2) {
        my_putstr("Error: this line is out of range\n");
        return line = askline(line, grid);
    }
    return line;
}