/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ostrformat - format_string
*/

#include <olympe/ostring.h>
#include <olympe/omem.h>

char *format_string(char *buffer, ullong *size, va_list args)
{
    char *str = va_arg(args, char *);
    ullong len = ostrlen(str);

    buffer = orealloc(buffer, sizeof(char), *size, *size + len);
    for (ullong i = 0; str[i]; i++) {
        buffer[*size - 1] = str[i];
        *size += 1;
    }
    return buffer;
}
