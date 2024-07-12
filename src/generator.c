/*
** EPITECH PROJECT, 2022
** generator.c
** File description:
** generate and find the biggest square in the generated map
*/

#include "my.h"

char *generate_map(int delim, char *str)
{
    char *line = malloc((delim + 1) * delim + 2);
    int len = delim * (delim + 1) - 1;
    int it = 0;
    int pos = 0;
    int place = delim;

    for (int i  = 0; i <= len; i++) {
        if (it == place) {
            line[i] = '\n';
            place += delim + 1;
        } else {
            line[i] = str[pos];
            pos++;
        }
        if (pos == my_strlen(str))
            pos = 0;
        it++;
    }
    return (line);
}
