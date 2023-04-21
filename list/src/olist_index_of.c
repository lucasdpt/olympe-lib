/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_index_of.c
*/

#include "olist.h"

/**
 * @brief Get the index of the given data
 * @param list
 * @param data
 * @return index of the data or -1 if not found
 */
int olist_index_of(olist_t *list, void *data)
{
    olist_node_t *tmp = NULL;

    if (list == NULL)
        return -1;
    tmp = list->head;
    if (tmp == NULL)
        return -1;
    for (uint i = 0; i < list->size; i++) {
        if (tmp->data == data)
            return i;
        if (!tmp->next)
            return -1;
        tmp = tmp->next;
    }
    return -1;
}
