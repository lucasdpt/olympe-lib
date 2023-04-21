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
 * If the list is empty,
 * @param list
 * @param data
 * @return 0 on success, -1 on failed
 */
int olist_add_node(olist_t *list, void *data)
{
    olist_node_t *node = NULL;

    if (!list)
        return -1;
    node = calloc(sizeof(olist_node_t), 1);
    if (!node)
        return -1;
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        node->prev = list->tail;
        list->tail = node;
    }
    list->size++;
    return 0;
}
