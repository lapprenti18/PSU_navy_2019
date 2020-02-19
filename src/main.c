/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

int main(int ac, char **argv)
{
    char **tab_coord = fill_tab();

    if (load_positions_file(argv, tab_coord) == 84)
        return (84);
    return (0);
}