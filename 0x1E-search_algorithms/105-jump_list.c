#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using
 *              the Jump search algorithm.
 * @list: Pointer to the head of the list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, prev, i;
    listint_t *current;

    if (list == NULL || size == 0)
        return (NULL);

    step = sqrt(size);
    prev = 0;
    current = list;

    while (current->next && current->index < step)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
        prev = current->index;
        for (i = 0; i < step && current->next; i++)
            current = current->next;
        step = current->index;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    while (current && current->index >= prev)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        current = current->next;
    }

    return (NULL);
}

