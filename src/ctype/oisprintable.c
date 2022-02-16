/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ctype - oisprintable
*/

int oisprintable(int c)
{
    return !(c < 32 || c > 126);
}
