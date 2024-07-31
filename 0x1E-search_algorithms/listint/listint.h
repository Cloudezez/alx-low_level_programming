#ifndef LISTINT_H
#define LISTINT_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list node structure
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);
void print_list(const listint_t *list);

#endif /* LISTINT_H */

