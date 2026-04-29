/*
** EPITECH PROJECT, 2025
** cpoolday06
** File description:
** Get the length of a string
*/

#include "../../include/shell.h"

int my_strlen(char const *str)
{
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }
    return size;
}
