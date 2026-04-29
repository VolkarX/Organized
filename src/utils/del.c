/*
** EPITECH PROJECT, 2025
** Organized
** File description:
** Delete in list handler
*/

#include "../../include/shell.h"

static void delete_node(workshop_t *wshop, node_t *c, node_t *p)
{
    mini_printf("%s n°%d - \"%s\" deleted.\n", c->type, c->id, c->name);
    if (p)
        p->next = c->next;
    else
        wshop->items = c->next;
    free(c->type);
    free(c->name);
    free(c);
}

static void find_and_delete(workshop_t *wshop, int id)
{
    node_t *p = NULL;
    node_t *c = wshop->items;

    while (c) {
        if (c->id == id) {
            delete_node(wshop, c, p);
            break;
        }
        p = c;
        c = c->next;
    }
}

int del(void *data, char **args)
{
    workshop_t *wshop = data;

    if (!args || !args[0])
        return 84;
    for (int i = 0; args[i]; i++)
        find_and_delete(wshop, my_atoi(args[i]));
    return 0;
}
