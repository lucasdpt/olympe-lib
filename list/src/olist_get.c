/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_get.c
*/

#include "olist.h"

/**
 * @brief Get node at the given index
 * @param list
 * @param index
 * @return
 */
olist_t *olist_get(olist_t *list, uint index)
{
    olist_t *tmp = list;

    if (list == NULL)
        return NULL;
    for (uint i = 0; i < index; i++) {
        if (tmp->next == NULL)
            return NULL;
        tmp = tmp->next;
    }
    return tmp;
}
