/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** ia xor algo
*/

#include "my.h"
#include "match.h"

static int set_xor(int res, int *arr, map_t *grid)
{
    res = arr[0];
    for (int i = 0; i < (grid->row - 3); i++) {
        res = res^arr[i + 1];
    }
    return res;
}

static void pair_pos(map_t *grid, int *line, int *matches)
{
    while (line_howmany(*grid, *line) == 0)
       *line = rand() % ((grid->row - 2) - 0 + 1);
    *matches = 1;
}

static int *initarr(map_t *grid)
{
    int *arr = malloc(sizeof(int) * (grid->row - 2));
    if (!(arr))
        return NULL;
    for (int i = 0; i < (grid->row - 2); i ++) {
        arr[i] = 0;
    }
    return arr;
}

void xorthis(map_t *grid, int max_matches, int *line, int *matches)
{
    int res = 0;
    int *arr = initarr(grid);
    int *temp = initarr(grid);
    int a = 0;
    int del = (temp[a] - arr[a]);

    for (; a < (grid->row - 2); a++) {
        arr[a] = matches_howmany(grid->map[a + 1]);
        temp[a] = matches_howmany(grid->map[a + 1]);
    }
    res = set_xor(res, arr, grid);
    if (res == 0) {
        pair_pos(grid, line, matches);
        return;
    }
    for (a = 0; res != 0;) {
        if (arr[a] > 0)
            arr[a] -= 1;
        res = set_xor(res, arr, grid);
        if (del > max_matches || arr[a] <= 0 ||
            del > matches_howmany(grid->map[a])) {
            arr[a] = temp[a];
            a++;
        }
        if (a > (grid->row - 2))
            a = 0;
    }
    free(arr);
    free(temp);
    *line = a;
    *matches = del;
}