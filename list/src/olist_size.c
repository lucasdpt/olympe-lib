/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_size.c
*/

#include "olist.h"

/**
 * @brief Get the size of the list
 * @param list
 * @return
 */
uint olist_size(olist_t *list)
{
    olist_t *tmp = list;
    uint size = 0;

    if (list == NULL)
        return 0;
    while (tmp->next != NULL) {
        size++;
        tmp = tmp->next;
    }
    size++;
    return size;
}
