/*
** EPITECH PROJECT, 2022
** main
** File description:
** main used for test
*/

#include "my.h"

char **final_convert(char **buffer, int i, int j)
{
    if (buffer[i][j] == '0')
        buffer[i][j] = 'o';
    if (buffer[i][j] != 'x' && buffer[i][j] != 'o' && buffer[i][j] != '0')
        buffer[i][j] = '.';
    return (buffer);
}

char **transform_whole_square(char **buffer, int row, int col, int spacing)
{
    int save = col;

    for (int i = 0; i != spacing; row--) {
        for (int j = 0; j != spacing; col--) {
            buffer[row][col] = 'x';
            j++;
        }
        col = save;
        i++;
    }
    return (buffer);
}

char **convert_array(char **buffer, int i, int j)
{
    if (buffer[i][j] == '.')
        buffer[i][j] = '1';
    if (buffer[i][j] == 'o')
        buffer[i][j] = '0';
    return (buffer);
}

char **detect(char **b, int i, int j)
{
    int min;

    if (b[i - 1][j] != '0' && b[i][j - 1] != '0' && b[i][j] != '0') {
        if (b[i - 1][j - 1] <= b[i - 1][j] && b[i - 1][j - 1] <= b[i][j - 1])
            min = b[i - 1][j - 1];
        if (b[i][j - 1] <= b[i - 1][j] && b[i][j - 1] <= b[i - 1][j - 1])
            min = b[i][j - 1];
        if (b[i - 1][j] <= b[i - 1][j - 1] && b[i - 1][j] <= b[i][j - 1])
            min = b[i - 1][j];
        b[i][j] = min + 1;
    }
    return (b);
}

char **transform_value(char **buffer)
{
    for (int i = 2; buffer[i] != NULL; i++) {
        for (int j = 1; buffer[i][j] != '\0'; j++) {
            buffer = detect(buffer, i, j);
        }
    }
    return (buffer);
}
