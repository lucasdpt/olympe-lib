/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** write - oputstr
*/

#include <olympe/owrite.h>

void oputstr(char const *str)
{
    owrite(1, str);
}

void oputstrerror(char const *str)
{
    owrite(2, str);
}
