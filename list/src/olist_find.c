/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_find.c
*/

#include "olist.h"

/**
 * @brief Find a node with the given data
 * @param list
 * @param data
 * @return
 */
olist_t *olist_find(olist_t *list, void *data)
{
    olist_t *tmp = list;

    if (list == NULL)
        return NULL;
    while (tmp->next != NULL) {
        if (tmp->data == data)
            return tmp;
        tmp = tmp->next;
    }
    if (tmp->data == data)
        return tmp;
    return NULL;
}
