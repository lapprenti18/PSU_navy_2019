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

typedef struct game {
} game_t;

int load_positions_file(char *path, char **tab_coord);
void display_map(char **tab);
char **fill_tab(void);
int load_tab(char *cd, char **tab);
int place_boat(char *cd, char **tab, int a);
int calc_lenght_boat_five(char *cd);
int good_coord_file(char *cd);
int calc_lenght_boat_four(char *cd);
int calc_lenght_boat_three(char *cd);
int calc_lenght_boat_two(char *cd);
int check_nb(char *cd);
int check_letter(char *cd);
int check_two_point(char *cd);
int check_coord(char *cd);
char *fill(char *path);
int check_valid_attack(char *str);
int missed_or_touch(char **tab, char *str);
int check_win_or_loose(char **tab);
void display_touch(char **tab, char *str, char x);