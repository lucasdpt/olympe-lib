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
void ofree(void *ptr);
void ofree_chararray(void **ptr);
void ofree_intarray(void **ptr, uint size);

#endif
