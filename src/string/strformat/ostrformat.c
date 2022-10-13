/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - ostrformat
*/

#include <olympe/octype.h>
#include <olympe/ostring.h>
#include <olympe/omem.h>
#include <olympe/omath.h>
#include <stdarg.h>

char *format_string(char *buffer, ullong *size, va_list args);
char *format_char(char *buffer, ullong *size, va_list args);
char *format_int(char *buffer, ullong *size, va_list args);

static const string_format_t formats[] = {
    {'s', format_string},
    {'c', format_char},
    {'d', format_int},
    {0, NULL}
};

static char *call_handler(char flag, char *buffer, ullong *size, va_list args)
{
    for (ulong i = 0; formats[i].flag; i++) {
        if (formats[i].flag == flag)
            buffer = formats[i].handler(buffer, size, args);
    }
    return buffer;
}

char *vostrformat(char const *str, va_list args)
{
    char *buffer = NULL;
    ullong size = 1;

    for (ulong i = 0; str[i]; i++) {
        if (str[i] != '%') {
            buffer = orealloc(buffer, sizeof(char), size, size + 1);
            buffer[size++ - 1] = str[i];
            continue;
        }
        i++;
        buffer = call_handler(otolower(str[i]), buffer, &size, args);
    }
    return buffer;
}

char *ostrformat(char const *str, ...)
{
    char *buffer = NULL;
    va_list args;
    ullong size = 1;

    va_start(args, str);
    for (ulong i = 0; str[i]; i++) {
        if (str[i] != '%') {
            buffer = orealloc(buffer, sizeof(char), size, size + 1);
            buffer[size++ - 1] = str[i];
            continue;
        }
        i++;
        buffer = call_handler(otolower(str[i]), buffer, &size, args);
    }
    va_end(args);
    return buffer;
}
