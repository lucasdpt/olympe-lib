/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ctype - otoupper
*/

int otoupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return c;
}
