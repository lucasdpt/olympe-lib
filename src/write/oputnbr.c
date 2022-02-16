/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** write - oputnbr
*/

#include <olympe/octype.h>
#include <olympe/owrite.h>

void oputnbr(int nb)
{
    int new_nb = 0;

    if (nb < 0) {
        oputchar(45);
        nb = nb * (-1);
    }
    if (nb > 9) {
        new_nb = nb % 10;
        nb = nb / 10;
        oputnbr(nb);
        oputchar(new_nb + INT_TO_ASCII);
    } else {
        oputchar(nb + INT_TO_ASCII);
    }
}

void oputlong(long nb)
{
    long new_nb = 0;

    if (nb < 0) {
        oputchar(45);
        nb = nb * (-1);
    }
    if (nb > 9) {
        new_nb = nb % 10;
        nb = nb / 10;
        oputnbr(nb);
        oputchar(new_nb + INT_TO_ASCII);
    } else {
        oputchar(nb + INT_TO_ASCII);
    }
}
