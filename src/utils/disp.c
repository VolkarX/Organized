/*
** EPITECH PROJECT, 2025
** Organized
** File description:
** Display list handler
*/

#include "../../include/shell.h"

int disp(void *data, char **args)
{
    node_t *c = ((workshop_t *)data)->items;

    (void)args;
    while (c) {
        mini_printf("%s n°%d - \"%s\"\n", c->type, c->id, c->name);
        c = c->next;
    }
    return 0;
}
