/*
** EPITECH PROJECT, 2023
** list
** File description:
** olist_find_node_index.c
*/

#include "olist.h"

uint olist_find_node_index(olist_t *list, void *data)
{
    uint i = 0;

    OLIST_FOREACH(list, node) {
        if (node->data == data)
            return i;
        i++;
    }
    return -1;
}
