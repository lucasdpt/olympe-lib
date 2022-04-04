/*
** EPITECH PROJECT, 2022
** olympe - lib
** File description:
** string - ostr_end_with
*/

#include <olympe/ostring.h>

bool ostr_end_with(char const *src, char const *end)
{
    if (!src || !end)
        return false;
    if (ostrlen(src) < ostrlen(end))
        return false;
    for (uint i = 0; i < ostrlen(end); i++) {
        if (src[ostrlen(src) - i - 1] != end[ostrlen(end) - i - 1])
            return false;
    }
    return true;
}
