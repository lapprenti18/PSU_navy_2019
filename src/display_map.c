/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

void display_prompt() {
    char buf[32278];
    int size = 0;
    my_printf("attack: ");
    size = read(0, buf, 32278);
    buf[size] = '\0';
    if (check_valid_attack(buf) == 84) {
        my_printf("wrong position\n");
        display_prompt();
    } else {
        send_msg(buf);
    }
}

void display_turn(int my_turn) {
    my_printf("\nmy_positions:%s\n");
    display_map(game->my_map);
    my_printf("\nenemy's positions:%s\n");
    display_map(game->enemy_map);
    if (!my_turn)
        my_printf("waiting for enemy's attack...\n");
    else
        display_prompt();
}

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
    my_printf("\n");
}