/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Communication of navy
*/

#include "../include/navy.h"

void    msg_handler(char *message, pid_t pid) {
    if (!my_strcmp(message, "00")) {
        if (!game->enemy_pid) {
            game->enemy_pid = pid;
            my_printf("\nenemy connected\n");
            send_msg("00");
            display_turn(1);
        } else {
            my_printf("successfully connected\n");
            display_turn(0);
        }
        return;
    }
    if (!my_strcmp(message, "HI") || !my_strcmp(message, "MI"))
        handle_response(message);
    else
        handle_position(message);
}

void    send_msg(char *message) {
    for (int i = 0; message[i]; i++) {
        for (int j = 0; j < message[i]; j++) {
            kill(game->enemy_pid, SIGUSR1);
            usleep(100);
        }
        usleep(100);
        kill(game->enemy_pid, SIGUSR2);
        usleep(100);
    }
    kill(game->enemy_pid, SIGUSR2);
}

void    signal_handler(int signo, siginfo_t *si, void *data) {
    if (si->si_signo == SIGUSR1) {
        game->int_recept += 1;
        return;
    }
    if (si->si_signo == SIGUSR2) {
        if (game->int_recept == 0) {
            msg_handler(game->str_recept, si->si_pid);
            my_memset(game->str_recept, 0, 3);
        } else {
            my_charcat(game->str_recept, (char)game->int_recept);
        }
        game->int_recept = 0;
    }
}

void    init_recepetion(void)
{
    struct sigaction sa;

    game->int_recept = 0;
    game->str_recept = malloc(sizeof(char ) * 3);
    my_memset(game->str_recept, 0, 3);
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = signal_handler;
    sigaction(SIGUSR1, &sa, 0);
    sigaction(SIGUSR2, &sa, 0);
}