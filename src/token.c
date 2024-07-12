/*
** EPITECH PROJECT, 2022
** B-CPE-110-REN-1-1-BSQ-ludwig.vandenberghe
** File description:
** token
*/

#include "my.h"

char get_token(char **buffer, int i, int j, char token)
{
    if (buffer[i][j] > token)
        token = buffer[i][j];
    return (token);
}

char is_x(char **buffer, int i, int j, char token)
{
    if (buffer[i][j] == 'x')
        token = token + 1;
    return (token);
}

char find_token(char **buffer)
{
    char token = 0;

    for (int i = 1; buffer[i] != NULL; i++) {
        for (int j = 0; buffer[i][j] != '\0'; j++) {
            token = get_token(buffer, i, j, token);
        }
    }
    return (token);
}

int is_already_changed(char **buffer, int token)
{
    for (int i = 1; buffer[i] != NULL; i++) {
        for (int j = 0; buffer[i][j] != '\0'; j++) {
            token = is_x(buffer, i, j, token);
        }
    }
    return(token);
}
