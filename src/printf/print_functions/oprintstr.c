/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** printf - oprintstr
*/

#include <olympe/octype.h>
#include <olympe/oprintf.h>
#include <olympe/owrite.h>

int oprintchar(va_list args, UNUSED char *flags)
{
    char c = va_arg(args, int);

    oputchar(c);
    return (0);
}

int oprintstr(va_list args, UNUSED char *flags)
{
    char *str = va_arg(args, char *);

    oputstr(str);
    return (0);
}
