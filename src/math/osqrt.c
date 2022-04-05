/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** osqrt
*/

#include <olympe/octype.h>

uint osqrt(int nb)
{
    uint result = 0;

    if (nb <= 0)
        return 0;
    if (nb == 1)
        return 1;
    for (int i = 0; i < nb; i++) {
        result++;
        i = result * result;
        if (i > nb)
            return 0;
    }
    return result;
}
