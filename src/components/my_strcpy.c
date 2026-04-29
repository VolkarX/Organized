/*
** EPITECH PROJECT, 2025
** my_strcpy
** File description:
** Copy a string
*/

#include "../../include/shell.h"

char *my_strcpy(const char *s)
{
    int i = 0;
    char *d;

    while (s[i])
        i++;
    d = malloc(i + 1);
    for (int j = 0; j <= i; j++)
        d[j] = s[j];
    return d;
}
