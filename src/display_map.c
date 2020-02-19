/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

void display_map(char **tab)
{
    my_printf(" |A B C D E F G H\n-+----------------\n");
    for (int c = 0; tab[c]; c++) {
        my_printf("%d|", c + 1);
        for (int a = 0; tab[c][a]; a++) {
            a % 1 == 0 ? my_printf(" ") : 0;
            my_printf("%c", tab[c][a]);
        }
        my_printf("\n");
    }
}