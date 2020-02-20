/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

int calc_lenght_boat_two(char *cd)
{
    if (cd[2] == cd[5]) {
        if ((int)cd[6] - (int)cd[3] != (int)cd[0] - 49)
            return (84);
    } else if (cd[3] == cd[6]) {
        if ((int)cd[5] - (int)cd[2] != (int)cd[0] - 49)
            return (84);
    } else
        return (84);
    return (0);
}

int calc_lenght_boat_three(char *cd)
{
    if (cd[10] == cd[13]) {
        if ((int)cd[14] - (int)cd[11] != (int)cd[8] - 49)
            return (84);
    } else if (cd[11] == cd[14]) {
        if ((int)cd[13] - (int)cd[10] != (int)cd[8] - 49)
            return (84);
    } else
        return (84);
    return (0);
}

int calc_lenght_boat_four(char *cd)
{
    if (cd[18] == cd[21]) {
        if ((int)cd[22] - (int)cd[19] != (int)cd[16] - 49)
            return (84);
    } else if (cd[19] == cd[22]) {
        if ((int)cd[21] - (int)cd[18] != (int)cd[16] - 49)
            return (84);
    } else
        return (84);
    return (0);
}

int calc_lenght_boat_five(char *cd)
{
    if (cd[26] == cd[29]) {
        if ((int)cd[30] - (int)cd[27] != (int)cd[24] - 49)
            return (84);
    } else if (cd[27] == cd[30]) {
        if ((int)cd[29] - (int)cd[26] != (int)cd[24] - 49)
            return (84);
    } else
        return (84);
    return (0);
}