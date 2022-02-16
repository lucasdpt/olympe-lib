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
    char *dest;
    ulong len = ostrlen(str);

    dest = ocalloc(sizeof(char), (len + 1));
    if (dest == NULL)
        return NULL;
    ostrcpy(dest, str);
    return dest;
}
