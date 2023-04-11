/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_destroy.c
*/

#include <stdlib.h>
#include "olist.h"

/**
 * @brief Destroy the olist object
 * Free all content & the list
 * @param list
 */
void olist_destroy(olist_t *list)
{
    olist_node_t *tmp = NULL;

    if (list == NULL)
        return;
    tmp = list->head;
    for (uint i = 0; i < list->size; i++) {
        if (tmp->next == NULL) {
            free(tmp);
            break;
        }
        tmp = tmp->next;
        free(tmp->prev);
    }
    free(list);
}
