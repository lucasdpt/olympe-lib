/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** ctype - oisalpha
*/

int oisalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
