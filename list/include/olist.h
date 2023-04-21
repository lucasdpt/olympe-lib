/*
** EPITECH PROJECT, 2023
** olympe-lib
** File description:
** olist - header
*/

#ifndef OLIST_H_
    #define OLIST_H_

    #include <stdbool.h>

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
    void (*destructor)(struct olist_s *);
} olist_t;

    #define OLIST_FOREACH(list, node) \
        for (olist_node_t *node = list->head; node != NULL; node = node->next)

/**
 * @brief Create a olist object
 * This function create a new list. Return NULL if malloc fail
 * @return olist_t*
 */
olist_t *olist_create(void);

/**
 * @brief Call the destructor of the list
 * @param list to destroy
 */
void olist_destroy(olist_t *list);

/**
 * @brief Add data to the list
 * If the list is empty, return -1
 * @param list
 * @param data
 * @return 0 on success, -1 on failed
 */
int olist_add_node(olist_t *list, void *data);

/**
 * @brief Remove the data at the given index, and free associated node
 * and its data
 * If the list is empty, nothing is done
 * @param list
 * @param index
 */
void olist_remove_node(olist_t *list, uint index);

/**
 * @brief Remove the data at the given index, and free associated node but not
 * its data
 * If the list is empty, nothing is done
 * @param list
 * @param index
 */
void olist_remove_node_wfree(olist_t *list, uint index);

/**
 * @brief Get node at the given index
 * @param list
 * @param index
 * @return
 */
olist_node_t *olist_get_node(olist_t *list, uint index);

/**
 * @brief Clear the list
 * Clear the list and free all nodes and their data
 * @param list
 */
void olist_clear(olist_t *list);

/**
 * @brief Get the index of the given data
 * @param list
 * @param data
 * @return index of the data or -1 if not found
 */
int olist_index_of(olist_t *list, void *data);

void default_destructor(olist_t *list);

#endif /* !OLIST_H_ */
