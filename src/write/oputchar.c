/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** write - oputchar
*/

#include <unistd.h>

void oputchar(char c)
{
    write(1, &c, 1);
}
