/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - omemset.c
*/

#include <olympe/octype.h>

void *omemset(void *dest, int value, ulong size)
{
    uchar *tmp = (uchar *)dest;

    for (; size; size--) {
        *tmp++ = value;
    }
    return dest;
}
