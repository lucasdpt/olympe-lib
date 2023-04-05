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
