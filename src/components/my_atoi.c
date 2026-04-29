/*
** EPITECH PROJECT, 2025
** my_atoi
** File description:
** Convert string to integer
*/

#include "../../include/shell.h"

int my_atoi(char const *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (!str)
        return 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}
