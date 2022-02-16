/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - omemcpy
*/

#include <olympe/octype.h>

void *omemcpy(void *dest, const void *src, ulong size)
{
    const uchar *srccopy;
    uchar *destcopy;

    if (dest == NULL || src == NULL || size == 0)
        return NULL;
    srccopy = (const uchar *)src;
    destcopy = (uchar *)dest;
    for (; size; size--)
        *destcopy++ = *srccopy++;
    return dest;
}