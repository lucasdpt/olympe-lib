/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** mem - ofree
*/

#include <olympe/octype.h>
#include <stdlib.h>

void ofree_intarray(int **ptr, uint size)
{
    if (!ptr)
        return;
    for (uint i = 0; i < size; i++)
        free(ptr[i]);
    free(ptr);
}

void ofree_chararray(char **ptr)
{
    if (!ptr)
        return;
    for (uint i = 0; ptr[i]; i++)
        free(ptr[i]);
    free(ptr);
}

void ofree(void *ptr)
{
    if (!ptr)
        return;
    free(ptr);
}
