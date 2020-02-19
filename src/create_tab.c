/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

char **fill_tab(void)
{
    char **tab = malloc(sizeof(char *) * 9);

    for (int c = 0; c < 8; c += 1) {
        tab[c] = malloc(sizeof(char) * 9);
        for (int b = 0; b < 8; b += 1) {
            tab[c][b] = '.';
        }
        tab[c][8] = '\0';
    }
    tab[8] = NULL;
    return (tab);
}