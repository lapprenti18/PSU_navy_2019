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
    init_recepetion();
    printf("my_pid : %d\n", getpid());
    printf("waiting for ennemy connexion...\n");
    while (1);
}

int    launch_game_p2(pid_t pid, char *path) {
    if (load_positions_file(path, game->my_map) == 84)
        return (84);
}