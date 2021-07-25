/*
** EPITECH PROJECT, 2021
** main
** File description:
** bsmatchstick
*/
#include "my.h"
#include "match.h"

static int game_loop(map_t grid, int max_matches, int size)
{
    int i = 0;

    while (1) {
        if (player_turn(&grid, max_matches) == -1)
            return 0;
        if (map_isempty(grid)) {
            while (grid.map[i])
                free(grid.map[i++]);
            free(grid.map);
            return lose();
        }
        ia_turn(&grid, max_matches);
        if (map_isempty(grid)) {
            while (grid.map[i])
                free(grid.map[i++]);
            free(grid.map);
            return win();
            }
    }
}

static int core(int size, int max_matches)
{
    map_t grid = init_map();

    grid = ask_size(grid, size);
    if (grid.map = my_load_map(grid) == NULL)
        return NULL;
    my_put2d_arr(grid.map);
    my_putchar('\n');
    return game_loop(grid, max_matches, size);
}

int main(int ac, char **av)
{
    int size = 0;
    int max_matches = 0;

    if (ac < 3)
        return 84;
    if (ac == 3) {
        size = my_getnbr(av[1]);
        max_matches = my_getnbr(av[2]);
    }
    if (size <= 1 || size > 100) {
        my_putstr("Error: Size is out of range\n");
        return EXIT_FAILURE;
    }
    if (max_matches < 1) {
        my_putstr("Error: Invalid Parameter\n");
        return EXIT_FAILURE;
    }
    return core(size, max_matches);
}
