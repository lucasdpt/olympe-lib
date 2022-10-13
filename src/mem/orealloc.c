/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** mem - orealloc
*/

#include <olympe/octype.h>
#include <olympe/ostring.h>
#include <olympe/omem.h>
#include <stdlib.h>

void *orealloc(void *ptr, ulong type, ulong size, ulong newsize)
{
    void *newptr;

    if (!newsize) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return (ocalloc(type, newsize));
    newptr = ocalloc(type, newsize);
    if (newptr == NULL)
        return NULL;
    omemcpy(newptr, ptr, size);
    free(ptr);
    return newptr;
}
