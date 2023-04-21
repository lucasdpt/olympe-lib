/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_create.c
*/

#include <stdlib.h>
#include "olist.h"

/**
 * @brief Create a olist object
 * This function create a new list. Return NULL if malloc fail
 * @return olist_t*
 */
olist_t *olist_create(void)
{
    olist_t *list = calloc(sizeof(olist_t), 1);

    if (list == NULL)
        return NULL;
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    list->destructor = &default_destructor;
    return list;
}
