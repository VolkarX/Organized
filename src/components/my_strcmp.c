/*
** EPITECH PROJECT, 2025
** my_ls
** File description:
** Compare 2 strings in alphabetic order
*/

#include "../../include/shell.h"

static int is_alnum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] != '\0' || s2[j] != '\0') {
        while (s1[i] != '\0' && !is_alnum(s1[i]))
            i++;
        while (s2[j] != '\0' && !is_alnum(s2[j]))
            j++;
        if (s1[i] == '\0' && s2[j] == '\0')
            return 0;
        if (s1[i] != s2[j])
            return (s1[i] - s2[j]);
        i++;
        j++;
    }
    return 0;
}
