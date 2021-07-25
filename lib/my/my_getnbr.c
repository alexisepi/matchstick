/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** returns a nbr from a string
*/

#include "my.h"

static int compute_nb(int nb, char *str, int i)
{
    if (48 <= str[i] && str[i] <= 59)
        nb += str[i] - '0';
    if (48 <= str[i + 1] && str[i + 1] <= 59)
        nb = nb * 10;
    return (nb);
}

int my_getnbr(char *str)
{
    int cpt = my_strlen(str);
    int nb = 0;
    int i = 0;
    int neg = 0;

    while (i != cpt) {
        if (str[i] == ' ' || str[i] == '\t')
            return 0;
        nb = compute_nb(nb, str, i);
        if (str[i] == '-')
            neg = 1;
        if (!(48 <= str[i + 1] && str[i + 1] <= 59))
            break;
        i++;
    }
    if (neg == 1)
        return (-nb);
    return (nb);
}