/*
** EPITECH PROJECT, 2019
** navy
** File description:
** Main of navy
*/

#include "../include/navy.h"

char *fill(char **av)
{
    struct stat size_buff;
    int reslt = stat(av[1], &size_buff);
    char *buffer = malloc(sizeof(char) * size_buff.st_size + 1);
    int fd = open(av[1], O_RDONLY);

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

int check_coord(char *cd)
{
    if ((cd[0] != '2' && cd[0] != '3' && cd[0] != '4' && cd[0] != '5') || (\
    cd[8] != '2' && cd[8] != '3' && cd[8] != '4' && cd[8] != '5') || (\
    cd[16] != '2' && cd[16] != '3' && cd[16] != '4' && cd[16] != '5') || (\
    cd[24] != '2' && cd[24] != '3' && cd[24] != '4' && cd[24] != '5') || (\
    cd[0] == cd[8]) || (cd[0] == cd[16]) || (cd[0] == cd[24]) || (\
    cd[8] == cd[16]) || (cd[8] == cd[24]) || (cd[16] == cd[24])) {
        printf("check_coord failed\n");
        return (84);
    }
    printf("check_coord good\n");
    return (0);
}

int check_two_point(char *cd)
{
    if ((cd[1] != ':') || (cd[9] != ':') || (cd[17] != ':') || (cd[25] != ':') || (\
    cd[4] != ':') || (cd[12] != ':') || (cd[20] != ':') || (cd[28] != ':')) {
        printf("check_two_point failed\n");
        return (84);
    }
    printf("check_two_point good\n");
    return (0);
    printf("%c %c %c %c\n", cd[4], cd[12], cd[20], cd[28]);
}

int check_letter(char *cd)
{
    if ((cd[2] != 'A' && cd[2] != 'B' && cd[2] != 'C' && cd[2] != 'D' && \
    cd[2] != 'E' && cd[2] != 'F' && cd[2] != 'G' && cd[2] != 'H') || (
    cd[5] != 'A' && cd[5] != 'B' && cd[5] != 'C' && cd[5] != 'D' && \
    cd[5] != 'E' && cd[5] != 'F' && cd[5] != 'G' && cd[5] != 'H') || (
    cd[10] != 'A' && cd[10] != 'B' && cd[10] != 'C' && cd[10] != 'D' && \
    cd[10] != 'E' && cd[10] != 'F' && cd[10] != 'G' && cd[10] != 'H') || (
    cd[13] != 'A' && cd[13] != 'B' && cd[13] != 'C' && cd[13] != 'D' && \
    cd[13] != 'E' && cd[13] != 'F' && cd[13] != 'G' && cd[13] != 'H') || (
    cd[18] != 'A' && cd[18] != 'B' && cd[18] != 'C' && cd[18] != 'D' && \
    cd[18] != 'E' && cd[18] != 'F' && cd[18] != 'G' && cd[18] != 'H') || (
    cd[21] != 'A' && cd[21] != 'B' && cd[21] != 'C' && cd[21] != 'D' && \
    cd[21] != 'E' && cd[21] != 'F' && cd[21] != 'G' && cd[21] != 'H') || (
    cd[26] != 'A' && cd[26] != 'B' && cd[26] != 'C' && cd[26] != 'D' && \
    cd[26] != 'E' && cd[26] != 'F' && cd[26] != 'G' && cd[26] != 'H') || (
    cd[29] != 'A' && cd[29] != 'B' && cd[29] != 'C' && cd[29] != 'D' && \
    cd[29] != 'E' && cd[29] != 'F' && cd[29] != 'G' && cd[29] != 'H')) {
        printf("check_point failed\n");
        return (84);
    }
    printf("check_point good\n");
    return (0);
}

int check_nb(char *cd)
{
    if ((cd[3] != '1' && cd[3] != '2' && cd[3] != '3' && cd[3] != '4' && \
    cd[3] != '5' && cd[3] != '6' && cd[3] != '7' && cd[3] != '8' )||(
    cd[6] != '1' && cd[6] != '2' && cd[6] != '3' && cd[6] != '4' && \
    cd[6] != '5' && cd[6] != '6' && cd[6] != '7' && cd[6] != '8' )||(
    cd[11] != '1' && cd[11] != '2' && cd[11] != '3' && cd[11] != '4' && \
    cd[11] != '5' && cd[11] != '6' && cd[11] != '7' && cd[11] != '8' )||(
    cd[14] != '1' && cd[14] != '2' && cd[14] != '3' && cd[14] != '4' && \
    cd[14] != '5' && cd[14] != '6' && cd[14] != '7' && cd[14] != '8' )||(
    cd[19] != '1' && cd[19] != '2' && cd[19] != '3' && cd[19] != '4' && \
    cd[19] != '5' && cd[19] != '6' && cd[19] != '7' && cd[19] != '8' )||(
    cd[22] != '1' && cd[22] != '2' && cd[22] != '3' && cd[22] != '4' && \
    cd[22] != '5' && cd[22] != '6' && cd[22] != '7' && cd[22] != '8' )||(
    cd[27] != '1' && cd[27] != '2' && cd[27] != '3' && cd[27] != '4' && \
    cd[27] != '5' && cd[27] != '6' && cd[27] != '7' && cd[27] != '8' )||(
    cd[30] != '1' && cd[30] != '2' && cd[30] != '3' && cd[30] != '4' && \
    cd[30] != '5' && cd[30] != '6' && cd[30] != '7' && cd[30] != '8')) {
        printf("check_letter failed\n");
        return (84);
    }
    printf("check_letter good\n");
    return (0);
}

int calc_lenght_boat_deux(char *cd)
{
    if (cd[2] == cd[5]) {
        if ((int)cd[6] - (int)cd[3] != (int)cd[0] - 49)
            return (84);
    } else if (cd[3] == cd[6]) {
        if ((int)cd[2] - (int)cd[5] != (int)cd[0] - 49)
            return (84);
    } else
        return (84);
    return (0);
}

int calc_lenght_boat_trois(char *cd)
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

int calc_lenght_boat_quatre(char *cd)
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

int calc_lenght_boat_cinq(char *cd)
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

int good_coord_file(char *cd)
{
    if (check_coord(cd) == 84 || check_two_point(cd) == 84 || \
    check_letter(cd) == 84 || check_nb(cd) == 84)
        return (84);
    if (calc_lenght_boat_deux(cd) == 84 || calc_lenght_boat_trois(cd) == 84 ||\
     calc_lenght_boat_quatre(cd) == 84 || calc_lenght_boat_cinq(cd) == 84) {
        printf("test\n");
        return (84);
    }
}

int load_tab(char *cd, char **tab)
{
    int a = 0;
    int rep = 0;

    for (;a < 4; a++) {
        for (int b = 0; b != cd[a * 8] - 48; b++) {
            if (cd[a * 8 + 2] == cd[a * 8 + 5]) {
                if (tab[cd[a * 8 + 3] - 49 + rep][cd[a * 8 + 2] - 65] != '.')
                    return (84);
                tab[cd[a * 8 + 3] - 49 + rep][cd[a * 8 + 2] - 65] = cd[a * 8];
            } else if (cd[a * 8 + 3] == cd[a * 8 + 6]) {
                if (tab[cd[a * 8 + 3] - 49][cd[a * 8 + 2] - 65 + rep] != '.')
                    return (84);
                tab[cd[a * 8 + 3] - 49][cd[a * 8 + 2] - 65 + rep] = cd[a * 8];
            }
            rep += 1;
        }
        printf("test %d \n", a);
        printf("rep %d \n", rep);
        rep = 0;
    }
    return (0);
}

char **fill_tab(void)
{
    char **tab = malloc(sizeof(char *) * 9);

    for (int c = 0; c < 8; c += 1) {
        tab[c] = malloc(sizeof(char) * 9);
        for (int b = 0; b < 8; b += 1) {
            tab[c][b] = '.';
        }
        tab[c][8] = '\0';
    }
    tab[8] = NULL;
    return (tab);
}

int main(int ac, char **argv)
{
    char *coords = fill(argv);
    char **tab_coord = fill_tab();

    if (my_strcmp(coords, "84") == 0) {
        printf("marche pos1\n");
        return (84);
    }
    if (good_coord_file(coords) == 84) {
        printf("marche pos2\n");
        return (84);
    }
    load_tab(coords, tab_coord);
    for (int c = 0; tab_coord[c] != NULL; c++)
        printf("%s\n",tab_coord[c]);
    return (0);
}