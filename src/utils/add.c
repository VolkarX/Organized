/*
** EPITECH PROJECT, 2025
** Organized
** File description:
** Add in list handler
*/

#include "../../include/shell.h"

node_t *new_item(const char *type, const char *name, int id)
{
    node_t *n = malloc(sizeof(node_t));

    if (!n)
        return NULL;
    n->type = my_strcpy(type);
    n->name = my_strcpy(name);
    n->id = id;
    n->next = NULL;
    return n;
}

static void add_to_list(workshop_t *wshop, char *type, char *name)
{
    node_t *n;
    int id = wshop->next_id;

    wshop->next_id++;
    n = new_item(type, name, id);
    if (!n)
        return;
    n->next = wshop->items;
    wshop->items = n;
    mini_printf("%s n°%d - \"%s\" added.\n", type, n->id, name);
}

int add(void *data, char **args)
{
    workshop_t *wshop = data;
    char *type;
    char *name;

    if (!args || !args[0] || !args[1])
        return 84;
    for (int i = 0; args[i] && args[i + 1]; i += 2) {
        type = args[i];
        name = args[i + 1];
        if (!type || !name || my_strlen(type) == 0 || my_strlen(name) == 0)
            return 84;
        add_to_list(wshop, type, name);
    }
    return 0;
}
