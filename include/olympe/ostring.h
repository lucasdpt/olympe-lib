/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - header
*/

#ifndef OSTRING_H_
    #define OSTRING_H_

    #include <olympe/octype.h>
    #include <stdarg.h>

int oatoi(char const *str);
char *oitoa(llong nb);
char *ostrcat(char *dest, char const *src);
char *ostrcatchar(char *dest, char const c);
char *ostrncat(char *dest, char const *src, ulong n);
int ostrcmp(char const *s1, char const *s2);
int ostrncmp(char const *s1, char const *s2, ulong n);
char *ostrcpy(char *dest, char const *src);
char *ostrncpy(char *dest, char const *src, ulong n);
char *ostrdup(char const *str);
ulong ostrlen(char const *str);
ulong ostrlensep(char const *str, char const separator);
char *ostrrev(char *str);

void *omemset(void *dest, int value, ulong size);
void *omemcpy(void *dest, const void *src, ulong size);

bool ostr_end_with(char const *src, char const *end);

char *ostrformat(char const *str, ...);
char *vostrformat(char const *str, va_list args);
typedef struct string_format_s {
    char flag;
    char *(*handler)(char *, ullong *, va_list);
} string_format_t;

#endif
