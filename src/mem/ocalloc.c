/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** mem - ocalloc
*/

#include <olympe/octype.h>
#include <olympe/ostring.h>
#include <stdlib.h>

void *ocalloc(ulong type, ulong size)
{
    void *ptr = malloc(type * size);

    if (ptr)
        omemset(ptr, 0, type * size);
    return ptr;
}
