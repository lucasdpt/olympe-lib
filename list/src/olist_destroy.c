/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_destroy.c
*/

#include <stdlib.h>
#include "olist.h"

/**
 * @brief Default destructor
 * @param list to destroy
 */
void default_destructor(olist_t *list)
{
    if (!list)
        return;
    olist_clear(list);
    free(list);
}

/**
 * @brief Call the destructor of the list
 * @param list to destroy
 */
void olist_destroy(olist_t *list)
{
    list->destructor(list);
}
