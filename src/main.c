/*
** EPITECH PROJECT, 2025
** Organized
** File description:
** Main file
*/

#include "../include/shell.h"

int handle_error(void)
{
    write(2, "usage: ./organized\n", 21);
    return 84;
}

void free_all(node_t *n)
{
    node_t *t;

    while (n) {
        t = n->next;
        free(n->type);
        free(n->name);
        free(n);
        n = t;
    }
}

int main(int argc, char **argv)
{
    workshop_t *wshop = malloc(sizeof(workshop_t));
    int f;

    if ((!wshop) || (argc >= 2))
        return handle_error();
    wshop->items = NULL;
    wshop->next_id = 0;
    f = workshop_shell(wshop);
    free_all(wshop->items);
    free(wshop);
    return f;
}
