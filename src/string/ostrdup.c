/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - ostrdup
*/

#include <olympe/octype.h>
#include <olympe/ostring.h>
#include <olympe/omem.h>

char *ostrdup(char const *str)
{
    char *dest = NULL;
    ulong len = ostrlen(str);

    dest = ocalloc(sizeof(char), (len + 1));
    if (!dest)
        return NULL;
    ostrcpy(dest, str);
    return dest;
}
