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
olist_node_t *olist_get_node(olist_t *list, uint index)
{
    olist_node_t *tmp = NULL;

    if (list == NULL)
        return NULL;
    if (index >= list->size)
        return NULL;
    tmp = list->head;
    if (tmp == NULL)
        return NULL;
    for (uint i = 0; i < index; i++) {
        if (tmp->next == NULL)
            return NULL;
        tmp = tmp->next;
    }
    return tmp;
}
