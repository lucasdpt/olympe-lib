/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** mem - header
*/

#ifndef OMEM_H_
    #define OMEM_H_

    #include <olympe/octype.h>

void *ocalloc(ulong type, ulong size);
void *orealloc(void *ptr, ulong type, ulong size, ulong newsize);

#endif
