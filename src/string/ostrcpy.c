/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - ostrcpy
*/

#include <olympe/octype.h>

char *ostrcpy(char *dest, char const *src)
{
    ulong i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *ostrncpy(char *dest, char const *src, ulong n)
{
    ulong i = 0;

    for (; src[i] && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
