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
 * Free all content and keep the first node (without its data)
 * @param list
 */
void olist_clear(olist_t *list)
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
}
