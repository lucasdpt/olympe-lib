/*
** EPITECH PROJECT, 2023
** olympe-lib
** File description:
** olist - header
*/

#ifndef OLIST_H_
    #define OLIST_H_

    #include "octype.h"

typedef struct olist_s {
    void *data;
    struct olist_s *next;
    struct olist_s *prev;
} olist_t;

olist_t *olist_create();
void olist_destroy(olist_t *list);

void olist_add(olist_t *list, void *data);
olist_t *olist_get(olist_t *list, uint index);
void olist_remove(olist_t *list, uint index);
olist_t *olist_find(olist_t *list, void *data);

void olist_foreach(olist_t *list, void (*func)(void *));

#endif /* !OLIST_H_ */
