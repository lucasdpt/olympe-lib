/*
** EPITECH PROJECT, 2023
** olympe-lib
** File description:
** olist - header
*/

#ifndef OLIST_H_
    #define OLIST_H_

    #ifndef NULL
        #define NULL (0)
    #endif

typedef struct olist_s {
    void *data;
    struct olist_s *next;
    struct olist_s *prev;
} olist_t;

typedef unsigned int uint;

olist_t *olist_create(void);
void olist_destroy(olist_t *list);

int olist_add(olist_t *list, void *data);
olist_t *olist_get(olist_t *list, uint index);
void olist_remove(olist_t *list, uint index);
olist_t *olist_find(olist_t *list, void *data);
uint olist_size(olist_t *list);
void olist_clear(olist_t *list);

#endif /* !OLIST_H_ */
