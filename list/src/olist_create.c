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
 * It's also the first node of the list. Data is set to NULL by default
 * To add data to the list, use olist_add
 * @return olist_t*
 */
olist_t *olist_create(void)
{
    olist_t *list = calloc(sizeof(olist_t), 1);

    if (list == NULL)
        return NULL;
    list->prev = NULL;
    list->next = NULL;
    list->data = NULL;
    return list;
}
