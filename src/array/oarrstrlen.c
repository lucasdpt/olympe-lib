/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** array - oarrstrlen
*/

#include <olympe/octype.h>

/*
** Get the size of a string array
*/
ulong oarrstrlen(char **tab)
{
    int count = 0;

    for (; tab[count] ; count++);
    return (count);
}
