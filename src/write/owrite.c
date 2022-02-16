/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** write - owrite
*/

#include <unistd.h>
#include <olympe/octype.h>
#include <olympe/ostring.h>

llong owrite(int fd, char const *str)
{
    return (write(fd, str, ostrlen(str)));
}
