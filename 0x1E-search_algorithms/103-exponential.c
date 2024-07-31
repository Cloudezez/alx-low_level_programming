#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low, high, mid;
    size_t i;

    low = 0;
    high = size - 1;

    if (array == NULL || size == 0)
        return (-1);

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            if (i > low)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
            return (mid);
        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using Exponential Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound, left, right;

    if (array == NULL || size == 0)
        return (-1);

    if (array[0] == value)
        return (0);

    bound = 1;
    while (bound < size && array[bound] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    left = bound / 2;
    right = (bound < size) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);
    return binary_search(array + left, right - left + 1, value) + left;
}

