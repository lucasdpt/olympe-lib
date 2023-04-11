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
olist_node_t *olist_find_node(olist_t *list, void *data)
{
    olist_node_t *tmp = NULL;

    if (list == NULL)
        return NULL;
    tmp = list->head;
    if (tmp == NULL)
        return NULL;
    for (uint i = 0; i < list->size; i++) {
        if (tmp->data == data)
            return tmp;
        if (tmp->next == NULL)
            return NULL;
        tmp = tmp->next;
    }
    return NULL;
}
