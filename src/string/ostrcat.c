/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - ostrcat.c
*/

#include <olympe/ostring.h>

char *ostrcat(char *dest, char const *src)
{
    ulong destlen = ostrlen(dest);
    ulong i = 0;

    while (src[i] != '\0') {
        dest[destlen] = src[i];
        destlen++;
        i++;
    }
    dest[destlen] = '\0';
    return (dest);
}

char *ostrcatchar(char *dest, char const c)
{
    ulong destlen = ostrlen(dest);

    dest[destlen] = c;
    dest[destlen + 1] = '\0';
    return (dest);
}

char *ostrncat(char *dest, char const *src, ulong n)
{
    ulong destlen = ostrlen(dest);
    ulong i = 0;

    while (src[i] != '\0' && i < n) {
        dest[destlen] = src[i];
        destlen++;
        i++;
    }
    dest[destlen] = '\0';
    return (dest);
}
