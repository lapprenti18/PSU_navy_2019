/*
** EPITECH PROJECT, 2019
** my_charcat
** File description:
** Cat char
*/

#include "my.h"

char    *my_charcat(char *dest, char const src)
{
    char *temp = malloc(sizeof(char) * 2);

    temp[0] = src;
    temp[1] = '\0';
    dest = my_strcat2(dest, temp, -1, 0);
    return (dest);
}