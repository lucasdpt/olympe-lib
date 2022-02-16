/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - oitoa
*/

#include <olympe/octype.h>
#include <olympe/ostring.h>

char *oitoa(llong nb)
{
    char str[sizeof(llong)];
    uint i = 0;
    llong new_nb = 0;

    for (uint j = 0; j < sizeof(llong); j++)
        str[j] = 0;
    if (nb < 0)
        str[i++] = '-';
    for (; nb > 9; i++) {
        new_nb = nb % 10;
        nb = nb / 10;
        str[i] = new_nb + INT_TO_ASCII;
    }
    str[i] = nb + INT_TO_ASCII;
    ostrrev(str);
    return str;
}
