/*
** EPITECH PROJECT, 2022
** main
** File description:
** main used for test
*/

#include "my.h"

char **operate_change(char **buffer, char token, int i, int j)
{
    int row;
    int col;
    int spacing = token - '0';

    if (buffer[i][j] == token) {
        if (buffer[i][j + 1] == token)
            buffer[i][j + 1] = token - 1;
        if (buffer[i + 1][j] == token)
            buffer[i + 1][j] = token - 1;
        if (buffer[i + 1][j + 1] == token)
            buffer[i + 1][j + 1] = token - 1;
        row = i;
        col = j;
        transform_whole_square(buffer, row, col, spacing);
    }
    return buffer;
}

char **transform_to_result(char **buffer, char token)
{
    for (int i = 1; buffer[i] != NULL; i++) {
        for (int j = 0; buffer[i][j] != '\0'; j++) {
            token = is_already_changed(buffer, token);
            buffer = operate_change(buffer, token, i, j);
        }
    }
    for (int c = 1; buffer[c] != NULL; c++) {
        for (int m = 0; buffer[c][m] != '\0'; m++) {
            final_convert(buffer, c, m);
        }
    }
    return (buffer);
}

void resolve(char **buffer)
{
    char token;

    for (int i = 1; buffer[i] != NULL; i++) {
        for (int j = 0; buffer[i][j] != '\0'; j++) {
            buffer = convert_array(buffer, i, j);
        }
    }
    buffer = transform_value(buffer);
    token = find_token(buffer);
    buffer = transform_to_result(buffer, token);
    for (int i = 1; buffer[i] != NULL; i++) {
        my_putstr(buffer[i]);
        write(1,"\n",1);
    }
}
