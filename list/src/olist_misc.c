/*
** EPITECH PROJECT, 2023
** olympe-lib
** File description:
** olist_misc
*/

#include "olist.h"

void olist_foreach(olist_t *list, void (*func)(void *))
{
    olist_t *tmp = list;

    if (list == NULL || func == NULL)
        return;
    while (tmp->next != NULL) {
        func(tmp->data);
        tmp = tmp->next;
    }
    func(tmp->data);
}
