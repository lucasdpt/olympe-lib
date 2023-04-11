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


typedef unsigned int uint;

typedef struct olist_node_s {
    void *data;
    struct olist_node_s *next;
    struct olist_node_s *prev;
} olist_node_t;

typedef struct olist_s {
    olist_node_t *head;
    olist_node_t *tail;
    uint size;
} olist_t;

olist_t *olist_create(void);
void olist_destroy(olist_t *list);

int olist_add_node(olist_t *list, void *data);
olist_node_t *olist_get_node(olist_t *list, uint index);
void olist_remove(olist_t *list, uint index);
olist_node_t *olist_find(olist_t *list, void *data);
void olist_clear(olist_t *list);

#endif /* !OLIST_H_ */
