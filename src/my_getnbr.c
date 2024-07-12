/*
** EPITECH PROJECT, 2022
** get nbr
** File description:
** retrieve a number from a string
*/

#include "my.h"

static int is_sign(char c)
{
    if (c == '-')
        return 1;
    if (c == '+')
        return 2;
    return 0;
}

static int is_odd(int nb)
{
    if (nb % 2 == 0)
        return 0;
    return 1;
}

static int my_isnum(char c)
{
    if (47 < c && c < 58)
        return (1);
    return (0);
}

static int overflow(int nb, int i, char const *str)
{
    if ((str[i] > '7' && nb == 214748364) || nb > 214748364 ) {
        return 1;
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int nb = 0;
    char sign;
    int minus = 0;

    for (int i = 0 ; str[i] != '\0' ; i += 1) {
        sign = is_sign(str[i]);
        if (my_isnum(str[i]) == 0 && (sign == 0 || nb != 0))
            return is_odd(minus) == 1 ? -nb : nb;
        if (sign == 1)
            minus += 1;
        if (my_isnum(str[i]) == 1 && overflow(nb, i, str) == 1)
            return 0;
        if (my_isnum(str[i]) == 1) {
            nb = nb * 10;
            nb += str[i] - 48;
        }

    }
    return is_odd(minus) == 1 ? -nb : nb;
}
