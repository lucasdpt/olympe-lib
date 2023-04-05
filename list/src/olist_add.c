/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_add.c
*/

#include <stdlib.h>
#include "olist.h"

/**
 * @brief Add data to the list
 * If the list is empty, data is set to the first node (already created)
 * @param list
 * @param data
 * @return 0 on success, -1 on failed
 */
int olist_add(olist_t *list, void *data)
{
    olist_t *tmp = list;

    if (list == NULL)
        return -1;
    if (tmp->data == NULL) {
        tmp->data = data;
        return 0;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = calloc(sizeof(olist_t), 1);
    if (tmp->next == NULL)
        return -1;
    tmp->next->prev = tmp;
    tmp->next->next = NULL;
    tmp->next->data = data;
    return 0;
}
