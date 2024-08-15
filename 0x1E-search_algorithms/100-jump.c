#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t i;

    if (array == NULL)
        return (-1);

    /* Find the block where the element may be present */
    while (prev < size && array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        if (array[prev + step] >= value || prev + step >= size)
            break;
        prev += step;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);

    /* Perform linear search within the found block */
    for (i = prev; i < size && i <= prev + step; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

