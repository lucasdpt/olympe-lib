/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ostrformat - format_int
*/

#include <olympe/ostring.h>
#include <olympe/omem.h>

char *format_int(char *buffer, ullong *size, va_list args)
{
    int i = va_arg(args, int);
    char *str = oitoa(i);
    ullong len = ostrlen(str);

    buffer = orealloc(buffer, sizeof(char), *size, *size + len);
    for (ullong i = 0; str[i]; i++) {
        buffer[*size - 1] = str[i];
        *size += 1;
    }
    return buffer;
}
