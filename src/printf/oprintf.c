/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** printf - oprintf
*/

#include <olympe/octype.h>
#include <olympe/ostring.h>
#include <olympe/omem.h>
#include <olympe/owrite.h>
#include <olympe/oprintf.h>
#include <stdlib.h>

const flags_t FLAGS_FUNCT[] = {
        {'c', &(oprintchar)},
        {'s', &(oprintstr)},
        {'d', &(oprintnbr)}
};

PRIVATE int is_convert_type(char c)
{
    for (int i = 0; i < 12; i++) {
        if (FLAGS_FUNCT[i].c == c)
            return (1);
    }
    return (0);
}

PRIVATE void launch_function(char c, va_list args, char *flags)
{
    for (int i = 0; i < 12; i++) {
        if (FLAGS_FUNCT[i].c == c) {
            FLAGS_FUNCT[i].fn(args, flags);
        }
    }
}

PRIVATE int convert_modulo(char *str, int i, va_list args)
{
    char *flags = ocalloc(sizeof(char), ostrlen(str));

    if (is_convert_type(str[i + 1])) {
        launch_function(str[i + 1], args, flags);
        i++;
    } else {
        oputchar(str[i]);
    }
    free(flags);
    return (i);
}

uint oprintf(char *str, ...)
{
    va_list args;
    uint i = 0;

    va_start(args, str);
    for (; str[i]; i++) {
        if (str[i] != '%') {
            oputchar(str[i]);
        } else {
            i = convert_modulo(str, i, args);
        }
    }
    va_end(args);
    return (i);
}
