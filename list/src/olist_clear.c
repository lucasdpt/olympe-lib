/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_clear.c
*/

#include <stdlib.h>
#include "olist.h"

/**
 * @brief Clear the list
 * Clear the list and free all nodes and their data
 * @param list
 */
void olist_clear(olist_t *list)
{
    olist_node_t *tmp = NULL;

    if (list == NULL)
        return;
    tmp = list->head;
    for (uint i = 0; i < list->size; i++) {
        if (tmp->next == NULL) {
            (tmp->data) ? free(tmp->data) : 0;
            free(tmp);
            break;
        }
        tmp = tmp->next;
        if (!tmp->prev->data)
            free(tmp->prev->data);
        free(tmp->prev);
    }
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}
