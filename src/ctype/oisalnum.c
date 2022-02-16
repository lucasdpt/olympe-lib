/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ctype - oisalnum
*/

#include <olympe/octype.h>

int oisalnum(int c)
{
    return (oisalpha(c) || oisdigit(c));
}
