/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Response of navy
*/

#include "../include/navy.h"

void    handle_response(char *msg)
{
    int touch = 0;

    if (!my_strcmp(msg, "HI")) {
        my_printf("%s: hit\n", game->last_input);
        touch = 1;
    } else {
        my_printf("%s: missed\n", game->last_input);
        touch = 0;
    }
    display_touch(game->enemy_map, game->last_input, touch ? 'x' : 'o');
    if (check_win_or_loose(game->enemy_map) == 1) {
        display_turn(-1);
        my_printf("I won\n");
        game->return_code = 0;
        return;
    }
    if (game->player == 2)
        display_turn(0);
    else
        my_printf("\nwaiting for enemy's attack...");
}

void    handle_position(char *msg)
{
    int touch = 0;

    if (missed_or_touch(game->my_map, msg) == 1) {
        my_printf("\n%s: hit\n", msg);
        touch = 1;
    } else
        my_printf("\n%s: missed\n", msg);
    display_touch(game->my_map, msg, touch ? 'x' : 'o');
    send_msg(touch ? "HI" : "MI");
    if (check_win_or_loose(game->my_map) == 1) {
        display_turn(-1);
        my_printf("Enemy won\n");
        game->return_code = 1;
        return;
    }
    if (game->player == 1)
        display_turn(1);
    else {
        my_printf("\n");
        display_prompt();
    }
}