/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

char *fill(char *path)
{
    struct stat size_buff;
    int reslt = stat(path, &size_buff);
    char *buffer = malloc(sizeof(char) * size_buff.st_size + 1);
    int fd = open(path, O_RDONLY);

    if (reslt == -1 || size_buff.st_size != 32)
        return ("84");
    for (int i = 0; i < size_buff.st_size + 1; i += 1)
        buffer[i] = '\0';
    read(fd, buffer, size_buff.st_size + 1);
    if (fd == -1)
        return ("84");
    close(fd);
    return (buffer);
}