/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Init game of navy
*/

#include "../include/navy.h"

int    launch_game_p1(char *path) {
    if (load_positions_file(path, game->my_map) == 84)
        return (84);
    game->player = 1;
    game->enemy_map = fill_tab();
    init_recepetion();
    printf("my_pid : %d\n", getpid());
    printf("waiting for ennemy connexion...\n");
    while (game->return_code == -1);
    return (game->return_code);
}

int    launch_game_p2(char *path) {
    if (load_positions_file(path, game->my_map) == 84)
        return (84);
    game->player = 2;
    game->enemy_map = fill_tab();
    init_recepetion();
    printf("my_pid : %d\n", getpid());
    send_msg("00");
    while (game->return_code == -1);
    return (game->return_code);
}