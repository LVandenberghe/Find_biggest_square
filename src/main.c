/*
** EPITECH PROJECT, 2022
** main
** File description:
** main used for test
*/

#include "my.h"

int main(int ac, char **av)
{
    char **buffer;
    char *stock;

    if (ac < 1 || ac > 3)
        return (84);
    if (ac == 2) {
        check_files(av[1]);
        buffer = read_file(av[1]);
        resolve(buffer);
    }
    if (ac == 3) {
        if (my_getnbr(av[1]) > 100)
            return (84);
        stock = generate_map(my_getnbr(av[1]), av[2]);
        buffer = str_to_word_array(stock, '\n');
        resolve_second_case(buffer, my_getnbr(av[1]));
    }
    return (0);
}
