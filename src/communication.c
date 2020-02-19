/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Communication of navy
*/

#include "../include/navy.h"

void    msg_handler(char *message) {
    printf("Message %s\n", message);
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
        if (game->int_recept = 0) {
            msg_handler(game->str_recept);
            my_memset(game->str_recept, 0, my_strlen(game->str_recept) + 1);
        } else {
            my_charcat(game->str_recept, (char)game->int_recept);
        }
    }

}

void    init_recepetion()
{
    struct sigaction sa;

    sigemptyset(&sa.sa_mask);
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = signal_handler;
    sigaction(SIGUSR1, &sa, 0);
    sigaction(SIGUSR2, &sa, 0);
}