/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** printf - header
*/

#ifndef OPRINTF_H_
    #define OPRINTF_H_

    #include <stdarg.h>
    #include <olympe/octype.h>

int oprintchar(va_list args, UNUSED char *flags);
int oprintstr(va_list args, UNUSED char *flags);
int oprintnbr(va_list args, char *flags);
uint oprintf(char *str, ...);

typedef struct flags_s {
    char c;
    int (*fn)(va_list, char *);
} flags_t;

#endif
