/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

int main(int ac, char **argv)
{
    int ret = 84;

    game = malloc(sizeof(game_t));
    game->my_map = fill_tab();
    game->return_code = -1;
    if (ac < 2)
        return (84);
    if (ac == 2)
        ret = launch_game_p1(argv[1]);
    if (ac == 3) {
        if (my_getnbr(argv[1]) <= 0) {
            my_puterror("Invalid PID\n");
            return (84);
        }
        if (my_str_isnum(argv[1])) {
            game->enemy_pid = my_getnbr(argv[1]);
            ret = launch_game_p2(argv[2]);
        }
    }
    return (ret);
}