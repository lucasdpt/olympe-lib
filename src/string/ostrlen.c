/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string -  ostrlen
*/

#include <olympe/octype.h>

ulong ostrlen(char const *str)
{
    ulong len = 0;

    if (str == NULL)
        return 0;
    for (; *str; str++)
        len++;
    return len;
}

ulong ostrlensep(char const *str, char const separator)
{
    ulong len = 0;

    if (str == NULL)
        return 0;
    for (; *str && *str != separator; str++)
        len++;
    return len;
}
