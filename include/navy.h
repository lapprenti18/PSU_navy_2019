/*
** EPITECH PROJECT, 2019
** navy
** File description:
** navy Declarations
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>

typedef struct game {
    int int_recept;
    char *str_recept;
    char **my_map;
    char **enemy_map;
} game_t;

game_t *game;