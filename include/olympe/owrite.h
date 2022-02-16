/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** write - header
*/

#ifndef OWRITE_H_
    #define OWRITE_H_

    #include <olympe/octype.h>

void oputchar(char c);
void oputnbr(int nb);
void oputlong(long nb);
void oputstr(char const *str);
void oputstrerror(char const *str);
llong owrite(int fd, char const *str);

#endif
