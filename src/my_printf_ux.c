/*
** EPITECH PROJECT, 2023
** printf_o
** File description:
** Placeholder
*/

#include <inttypes.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

static char *getargux_tt(va_list list, params_t params)
{
    ptrdiff_t nb = va_arg(list, unsigned long int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    ptrdiff_t nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

static char *getargux_z(va_list list, params_t params)
{
    size_t nb = va_arg(list, unsigned long int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    size_t nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

static char *getargux_j(va_list list, params_t params)
{
    uintmax_t nb = va_arg(list, unsigned long int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    uintmax_t nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

static char *getargux_ll(va_list list, params_t params)
{
    unsigned long long int nb = va_arg(list, unsigned long long int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    unsigned long long int nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

char *getargux_l(va_list list, params_t params)
{
    unsigned long int nb = va_arg(list, unsigned long int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    unsigned long int nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

char *getargux_h(va_list list, params_t params)
{
    unsigned short int nb = va_arg(list, unsigned int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    unsigned short int nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

char *getargux_hh(va_list list, params_t params)
{
    unsigned char nb = va_arg(list, unsigned int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    unsigned char nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

char *getargux_c(va_list list, params_t params)
{
    unsigned int nb = va_arg(list, unsigned int);
    char base[16] = "0123456789ABCDEF";
    char *str;
    int i = 0;
    unsigned int nb2 = nb;

    for (; nb2 > 0; nb2 /= 16)
        i++;
    i += (nb == 0) ? 1 : 0;
    str = malloc(sizeof(char) * (i + 1));
    for (i = 0; nb > 0; nb /= 16) {
        str[i] = base[nb % 16];
        i++;
    }
    str[0] = (i == 0) ? '0' : str[0];
    i += (nb == 0) ? 1 : 0;
    str[i] = '\0';
    my_revstr(str);
    return str;
}

int my_printf_ux(va_list list, params_t *params)
{
    int count = 0;
    char *(*getargux[9])(va_list, params_t) = {&getargux_c, &getargux_hh,
        &getargux_ll, &getargux_h, &getargux_l, &getargux_tt, &getargux_c,
        &getargux_j, &getargux_z};
    to_print_t to_print = initialize_to_print();

    params->length = (params->length == 10) ? 2 : params->length;
    params->length = (params->length == 9) ? 8 : params->length;
    to_print.arg = getargux[params->length](list, *params);
    to_print.arg = (to_print.arg[0] == '0' && params->precision != 0) ?
        0 : to_print.arg;
    if (params->precision != 0)
        min_digits_precision(&to_print.arg, *params->precision);
    do_flags(&to_print, *params);
    count += write_struct(to_print);
    return count;
}
