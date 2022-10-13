/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ostrformat - format_char
*/

#include <olympe/ostring.h>
#include <olympe/omem.h>

char *format_char(char *buffer, ullong *size, va_list args)
{
    char str = va_arg(args, int);

    buffer = orealloc(buffer, sizeof(char), *size, *size + 1);
    buffer[*size - 1] = str;
    *size += 1;
    return buffer;
}
