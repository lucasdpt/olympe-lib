/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_remove.c
*/

#include <stdlib.h>
#include "olist.h"

/**
 * @brief Remove the data at the given index, and free associated node
 * If the list have only one node, only the data is free
 * If the list is empty, nothing is done
 * @param list
 * @param index
 */
void olist_remove(olist_t *list, uint index)
{
    olist_t *tmp = list;

    if (list == NULL)
        return;
    if (tmp->prev == NULL && tmp->next == NULL) {
        free(tmp->data);
        return;
    }
    for (uint i = 0; i < index; i++) {
        if (tmp->next == NULL)
            return;
        tmp = tmp->next;
    }
    if (tmp->prev != NULL)
        tmp->prev->next = tmp->next;
    if (tmp->next != NULL)
        tmp->next->prev = tmp->prev;
    free(tmp->data);
    free(tmp);
}
