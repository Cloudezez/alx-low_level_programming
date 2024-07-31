#ifndef SKIPLIST_H
#define SKIPLIST_H

#include "search_algos.h"

/* Function prototypes for skip list operations */
skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

#endif /* SKIPLIST_H */

