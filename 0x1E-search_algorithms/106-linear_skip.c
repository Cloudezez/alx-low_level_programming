#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 * 
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list, *express = list;

    if (!list)
        return (NULL);

    /* Find the block where the value may be located */
    while (express->express)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        if (express->n >= value)
            break;
        current = express;
        express = express->express;
    }
    
    /* Print the range where the value is located */
    printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);

    /* Perform linear search in the identified block */
    while (current && current->index <= express->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        current = current->next;
    }

    return (NULL);
}

