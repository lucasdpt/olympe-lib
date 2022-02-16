/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - ostrrev
*/

#include <olympe/octype.h>
#include <olympe/ostring.h>

char *ostrrev(char *str)
{
    ulong i = 0;
    ulong length = ostrlen(str);
    char c;

    for (; i < length; i++) {
        length--;
        c = str[i];
        str[i] = str[length];
        str[length] = c;
    }
    return str;
}
