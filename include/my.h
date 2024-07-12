/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** contain prototypes
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

#ifndef MY_H_
    #define MY_H_
        int my_putstr(char const *str);
        void my_putchar(char c);
        char **str_to_word_array(char *str, char delim);
        int fs_open_file(char const *filepath);
        char **read_file(char *filepath);
        char *my_strcpy_m(char const *str, unsigned int n);
        int my_put_nbr(int nb);
        int my_strlen(char const *str);
        char *my_strcpy (char *dest, char const *src);
        char *my_strncpy (char *dest, char const *src, unsigned int n);
        int my_getnbr(char const *str);
        char *my_strdup(char const *str);
        int check_files(char *filepath);
        char find_token(char **buffer);
        char **convert_array(char **buffer, int i, int j);
        char *generate_map(int i, char *str);
        void resolve_second_case(char **buffer, int delim);
        char **transform_to_result(char **buffer, char token);
        char **transform_whole_square(char **buffer, int row, int col, int spacing);
        char **final_convert(char **buffer, int i, int j);
        void resolve(char **buffer);
        char **detect(char **b, int i, int j);
        char **transform_value(char **buffer);
        int is_already_changed(char **buffer, int token);
#endif /* !MY_H_ */