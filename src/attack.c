/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

int check_valid_attack(char *str)
{
    if (my_strlen(str) != 2) {
        my_printf("wrong position\n");
        return (84);
    }
    if (str[0] < 'A' || str[0] > 'H' || str[1] < '1' || str[1] > '8') {
        my_printf("wrong position\n");
        return (84);
    }
    return (0);
}

int missed_or_touch(char **tab, char *str)
{
    if (tab[str[1] - 49][str[0] - 65] < '2' || tab[str[1] - 49]\
    [str[0] - 65] > '5')
        return (0);
    return (1);
}

int check_win_or_loose(char **tab)
{
    int nb = 0;

    for (int a = 0; tab[a]; a += 1) {
        for (int b = 0; tab[a][b]; b += 1)
            tab[a][b] == 'x' ? nb += 1 : 0;
    }
    if (nb == 14)
        return (1);
    return (0);
}

void display_touch(char **tab, char *str, char x)
{
    tab[str[1] - 49][str[0] - 65] = x;
}