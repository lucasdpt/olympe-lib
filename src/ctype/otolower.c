/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ctype - otolower
*/

int otolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 'a');
    return c;
}
