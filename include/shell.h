/*
** EPITECH PROJECT, 2025
** G-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#ifndef SHELL_H
    #define SHELL_H
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <string.h>
    #include <stdarg.h>

typedef struct node {
    char *type;
    char *name;
    int id;
    struct node *next;
} node_t;

typedef struct workshop {
    node_t *items;
    int next_id;
} workshop_t;

// Commands & workshop handler
int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);
int workshop_shell(void *data);

// Misc
int my_strlen(char const *str);
int handle_error(void);
int my_strcmp(char *s1, char *s2);
char *my_strdup(char *str);
char *my_strcpy(const char *s);
int mini_printf(const char *format, ...);
int my_atoi(char const *str);

#endif /* SHELL_H */
