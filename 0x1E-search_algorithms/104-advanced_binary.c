#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array
 * @array: Pointer to the first element of the array
 * @start: Starting index of the subarray
 * @end: Ending index of the subarray
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    printf("Searching in array: ");
    for (i = start; i <= end; i++)
    {
        if (i > start)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

/**
 * binary_search_recursive - Recursive binary search for the first occurrence
 * @array: Pointer to the first element of the array
 * @low: The starting index of the subarray
 * @high: The ending index of the subarray
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of value, or -1 if not found
 */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (low > high)
        return (-1);

    mid = low + (high - low) / 2;
    print_array(array, low, high);

    if (array[mid] == value)
    {
        if (mid == 0 || array[mid - 1] != value)
            return (mid);
        return (binary_search_recursive(array, low, mid - 1, value));
    }
    if (array[mid] < value)
        return (binary_search_recursive(array, mid + 1, high, value));
    return (binary_search_recursive(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array using advanced Binary Search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of value, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (binary_search_recursive(array, 0, size - 1, value));
}

