/*
** EPITECH PROJECT, 2023
** olympe-lib
** File description:
** olist_manage
*/

#include <stdlib.h>
#include "olist.h"

olist_t *olist_create()
{
    olist_t *list = malloc(sizeof(olist_t));

    if (list == NULL)
        return NULL;
    list->prev = NULL;
    list->next = NULL;
    list->data = NULL;
    return list;
}

void olist_destroy(olist_t *list)
{
    olist_t *tmp = NULL;

    if (list == NULL)
        return;
    while (list->next != NULL) {
        tmp = list->next;
        free(list->data);
        free(list);
        list = tmp;
    }
    free(list->data);
    free(list);
}
