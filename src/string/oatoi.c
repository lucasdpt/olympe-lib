/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** string - oatoi
*/

#include <olympe/octype.h>

static int check_isint(llong nb)
{
    if (nb < -2147483648 || nb > 2147483647)
        return (0);
    else
        return (nb);
}

static void check_neg(int *isneg, char str)
{
    if (str == 43)
        *isneg = 1;
    if (str == 45)
        *isneg = -1;
}

static int is_letter(char c)
{
    if ((c < 48 && c > 57))
        return (1);
    else if (c == 43 || c == 45 || (c >= 48 && c <= 57))
        return (0);
    else
        return (1);
}

int oatoi(char const *str)
{
    llong nb = 0;
    uint i = 0;
    int meet_letter = 0;
    int final_nb;
    int isneg = 1;

    while (str[i] != '\0' && (meet_letter != 1)) {
        if (str[i] >= 48 && str[i] <= 57) {
            nb = nb + str[i] - 48;
            nb = nb * 10;
        }
        check_neg(&isneg, str[i]);
        meet_letter = is_letter(str[i]);
        i++;
    }
    nb = nb / 10;
    nb = nb * isneg;
    final_nb = check_isint(nb);
    return (final_nb);
}
