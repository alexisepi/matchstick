/*
** EPITECH PROJECT, 2021
** my_load_map
** File description:
** matchstick
*/
#include "match.h"
#include "my.h"

static char fill_map(char current, int start, int nb_matches, int j)
{
    if (j >= start - (nb_matches / 2) &&
        j <= start + (nb_matches / 2) && (current != '*'))
        current = '|';
    else if (current != '*')
        current = ' ';
    return current;
}

char **my_load_map(map_t grid)
{
    
    int nb_matches = 1;
    int start = grid.col / 2;

    grid.map = mem_alloc_2d_array(grid.col, grid.row);
    if (grid.map == NULL)
        return NULL;
    for (int i = 0; i < grid.col; i++) {
        grid.map[0][i] = '*';
        grid.map[grid.row - 1][i] = '*';
    }
    for (int i = 0; i < grid.row; i ++) {
        grid.map[i][0] = '*';
        grid.map[i][grid.col - 1] = '*';
    }
    for (int i = 1; i < grid.row - 1; i++, nb_matches += 2)
        for (int j = 0; j < grid.col; j++)
            grid.map[i][j] = fill_map(grid.map[i][j], start, nb_matches, j);
    return grid.map;
}

int split(map_t grid, int i)
{
    for (int y = 0; grid.map[i][y] != '\0'; y++)
        if (grid.map[i][y] == '|')
            return 0;
    return 1;
}

int map_isempty(map_t grid)
{
    for (int i = 0; grid.map[i] != NULL; i ++){
        if (split(grid, i) == 0)
            return 0;
    }
    return 1;
}