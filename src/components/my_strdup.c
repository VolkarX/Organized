/*
** EPITECH PROJECT, 2025
** my_strdup
** File description:
** Allocate memory from the string
*/

#include "../../include/shell.h"

char *my_strdup(char *str)
{
    int len = my_strlen(str);
    char *dup = malloc(sizeof(char) * (len + 1));

    if (!dup)
        return NULL;
    for (int i = 0; i < len; i++)
        dup[i] = str[i];
    dup[len] = '\0';
    return dup;
}
