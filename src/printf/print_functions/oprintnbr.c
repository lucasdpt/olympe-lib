/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** printf - oprintnbr
*/

#include <olympe/octype.h>
#include <olympe/oprintf.h>
#include <olympe/owrite.h>

int oprintnbr(va_list args, UNUSED char *flags)
{
    int nb = va_arg(args, int);

    oputnbr(nb);
    return (0);
}
