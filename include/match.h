/*
** EPITECH PROJECT, 2021
** header
** File description:
** matchstick
*/

#ifndef MATCH_H_
#define MATCH_H_

#include <stdlib.h>

/*structs*/

typedef struct map_s{
    int col;
    int row;
    size_t len;
    char *stdline;
    char **map;
}map_t;

/*funcs*/
void clear_in(char **stdline);

int askline(int line, map_t grid);

char **my_load_map(map_t grid);

int player_turn(map_t *grid, int max_matches);

void update_map( map_t *grid, int line, int matches);

int askmatches(int *matches, map_t grid, int line, int max_matches);

map_t ask_size(map_t grid, int size);

int map_isempty(map_t grid);

map_t init_map(void);

int win(void);

int lose(void);

void ia_turn(map_t *grid, int max_matches);

int line_howmany(map_t grid, int line);

int matches_howmany(char *str);

void xorthis(map_t *grid, int max_matches, int *line, int *matches);
#endif
