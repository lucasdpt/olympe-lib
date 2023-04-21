/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_remove.c
*/

#include <stdlib.h>
#include "olist.h"

static void olist_node_remove(olist_t *list, olist_node_t *node)
{
    if (node->prev == NULL && node->next == NULL) {
        list->head = NULL;
        list->tail = NULL;
        return;
    }
    if (node->prev == NULL) {
        list->head = node->next;
        node->next->prev = NULL;
        return;
    }
    if (node->next == NULL) {
        list->tail = node->prev;
        node->prev->next = NULL;
        return;
    }
    node->prev->next = node->next;
    node->next->prev = node->prev;
}

static void olist_remove_node_cond(olist_t *list, uint index, bool freeable)
{
    olist_node_t *tmp = NULL;

    if (list == NULL)
        return;
    if (index >= list->size)
        return;
    tmp = list->head;
    if (tmp == NULL)
        return;
    for (uint i = 0; i < index; i++) {
        if (tmp->next == NULL)
            return;
        tmp = tmp->next;
    }
    olist_node_remove(list, tmp);
    if (freeable)
        free(tmp->data);
    free(tmp);
    list->size--;
}

/**
 * @brief Remove the data at the given index, and free associated node
 * and its data
 * If the list is empty, nothing is done
 * @param list
 * @param index
 */
void olist_remove_node(olist_t *list, uint index)
{
    olist_remove_node_cond(list, index, true);
}

/**
 * @brief Remove the data at the given index, and free associated node but not
 * its data
 * If the list is empty, nothing is done
 * @param list
 * @param index
 */
void olist_remove_node_wfree(olist_t *list, uint index)
{
    olist_remove_node_cond(list, index, false);
}
