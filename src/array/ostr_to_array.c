/*
** EPITECH PROJECT, 2022
** olympe-lib
** File description:
** array - ostr_to_array
*/

#include <olympe/octype.h>
#include <olympe/omem.h>
#include <olympe/ostring.h>

static bool is_not_separator(char c, char *separators)
{
    uint a = 0;

    for (uint y = 0; separators[y] != '\0'; y++) {
        if (c == separators[y]) {
            a++;
        }
    }
    if (a == 0)
        return (1);
    else
        return (0);
    return (0);
}

static uint word_size(char *str, int i, char *separators)
{
    uint count = 0;

    while (is_not_separator(str[i], separators) && str[i] != '\0') {
        count++;
        i++;
    }
    return (count);
}

static uint spcount(char *str, char *separators)
{
    uint count = 0;
    for (uint i = 0; str[i] != '\0'; i++) {
        for (uint y = 0; separators[y] != '\0'; y++) {
            count += (str[i] == separators[y]) ? 1 : 0;
        }
    }
    return (count);
}

static uint for_boucle(char *str, char *separators, char *result, uint i)
{
    uint k = 0;

    for (k = 0; str[i] != '\0'; k++, i++) {
        if (is_not_separator(str[i], separators))
            result[k] = str[i];
        else
            break;
    }
    return (i);
}

/**
* Split string to array with separators
* Separators is a string, don't use a space
* Example: ostr_to_array(str, " ");
*/
char **ostr_to_array(char *str, char *separators)
{
    char **result = ocalloc(sizeof(char *), (spcount(str, separators) + 2));
    uint j = 0;

    if (!result)
        return NULL;
    for (uint i = 0; str[i]; i++) {
        while (is_not_separator(str[i], separators) == 0 && str[i] != '\0')
            i++;
        result[j] = ocalloc(sizeof(char), (word_size(str, i, separators) + 1));
        if (!result[j])
            return NULL;
        i = for_boucle(str, separators, result[j], i);
        j++;
        if (i >= ostrlen(str))
            break;
    }
    return result;
}
