/*
** EPITECH PROJECT, 2025
** miniprintf
** File description:
** Printf function in C
*/

#include "../../include/shell.h"

static int my_putchar(char c)
{
    return write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return i;
}

int my_put_nbr(int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * -1;
    } else if (nbr >= 10) {
        my_put_nbr(nbr / 10);
    }
    my_putchar(nbr % 10 + '0');
    return nbr;
}

int print_arg(char a, va_list ap)
{
    int i = 0;

    if (a == 'd' || a == 'i')
        return my_put_nbr(va_arg(ap, int));
    if (a == 's')
        return my_putstr(va_arg(ap, char *));
    if (a == 'c')
        return my_putchar(va_arg(ap, int));
    i += my_putchar('%');
    i += my_putchar(a);
    return i;
}

int mini_printf(const char *format, ...)
{
    va_list ap;
    int i;

    i = 0;
    va_start(ap, format);
    while (*format != '\0') {
        if (*format == '%') {
            ++format;
            i += print_arg(*format, ap);
        } else {
            i += write(1, format, 1);
        }
        ++format;
    }
    va_end(ap);
    return i;
}
