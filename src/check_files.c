/*
** EPITECH PROJECT, 2022
** check_files
** File description:
** check if the file given as a param exist
*/

#include "my.h"

int check_files(char *filepath)
{
    struct stat buffer;
    int exist = stat(filepath, &buffer);
    int open_file = open(filepath, O_RDONLY);
    char the_read[10];
    int res = read(open_file, the_read, 10);
    if (open_file == -1 || res == -1) {
        close(open_file);
        return 84;
    }
    close(open_file);
    int i = 0;
    while (the_read[i - 1] != '\n') {
        i++;
    }
    if (the_read[i] != '.' && the_read[i] != 'o')
        return 84;
    if (S_ISREG(buffer.st_mode) && exist == 0)
        return 0;
    return 84;
}
