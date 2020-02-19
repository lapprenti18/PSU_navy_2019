/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

int good_coord_file(char *cd)
{
    if (check_coord(cd) == 84 || check_two_point(cd) == 84 || \
    check_letter(cd) == 84 || check_nb(cd) == 84)
        return (84);
    if (calc_lenght_boat_two(cd) == 84 || calc_lenght_boat_three(cd) == 84 || \
    calc_lenght_boat_four(cd) == 84 || calc_lenght_boat_five(cd) == 84) {
        return (84);
    }
    return (0);
}

int load_positions_file(char *path, char **tab_coord)
{
    char *coords = fill(path);

    if (my_strcmp(coords, "84") == 0 || good_coord_file(coords) == 84) {
        my_printf("Wrong map format.\n");
        return (84);
    }
    if (load_tab(coords, tab_coord) == 84) {
        my_printf("Wrong map format.\n");
        return (84);
    }
    return (0);
}