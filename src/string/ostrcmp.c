/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - ostrcmp
*/

#include <olympe/octype.h>

int ostrcmp(char const *s1, char const *s2)
{
    ulong i = 0;

    while (s1[i] || s2[i]) {
        if (s1[i] < s2[i]) {
            return -1;
        } else if (s1[i] > s2[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}

int ostrncmp(char const *s1, char const *s2, ulong n)
{
    ulong i = 0;

    while ((s1[i] || s2[i]) && i < n) {
        if (s1[i] < s2[i]) {
            return -1;
        } else if (s1[i] > s2[i]) {
            return 1;
        }
        i++;
    }
    return 0;
}
