/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

int place_boat(char *cd, char **tab, int a)
{
    int rep = 0;

    for (int b = 0; b != cd[a * 8] - 48; b++) {
        if (cd[a * 8 + 2] == cd[a * 8 + 5] && tab[cd[a * 8 + 3] - 49 + rep]\
        [cd[a * 8 + 2] - 65] == '.') {
            tab[cd[a * 8 + 3] - 49 + rep][cd[a * 8 + 2] - 65] = cd[a * 8];
        } else if (cd[a * 8 + 3] == cd[a * 8 + 6] && tab[cd[a * 8 + 3] - 49]\
        [cd[a * 8 + 2] - 65 + rep] == '.') {
            tab[cd[a * 8 + 3] - 49][cd[a * 8 + 2] - 65 + rep] = cd[a * 8];
        } else
            return (84);
        rep += 1;
    }
    return (0);
}

int load_tab(char *cd, char **tab)
{
    int a = 0;

    for (;a < 4; a++)
        if (place_boat(cd, tab, a) == 84)
            return (84);
    return (0);
}
