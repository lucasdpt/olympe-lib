/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - header
*/

#ifndef OSTRING_H_
    #define OSTRING_H_

    #include <olympe/octype.h>

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
char *ostrrev(char *str);

void *omemset(void *dest, int value, ulong size);
void *omemcpy(void *dest, const void *src, ulong size);

#endif
