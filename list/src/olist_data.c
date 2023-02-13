/*
** EPITECH PROJECT, 2023
** olympe-lib
** File description:
** olist_data
*/

#include <stdlib.h>
#include "olist.h"

void olist_add(olist_t *list, void *data)
{
    olist_t *tmp = list;

    if (list == NULL)
        return;
    if (tmp->data == NULL) {
        tmp->data = data;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = malloc(sizeof(olist_t));
    tmp->next->prev = tmp;
    tmp->next->next = NULL;
    tmp->next->data = data;
}

olist_t *olist_get(olist_t *list, uint index)
{
    olist_t *tmp = list;

    if (list == NULL)
        return NULL;
    for (uint i = 0; i < index; i++) {
        if (tmp->next == NULL)
            return NULL;
        tmp = tmp->next;
    }
    return tmp;
}

void olist_remove(olist_t *list, uint index)
{
    olist_t *tmp = list;

    if (list == NULL)
        return;
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
