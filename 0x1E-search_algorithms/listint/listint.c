#include <stdio.h>
#include <stdlib.h>
#include "listint.h"

/**
 * create_list - Creates a singly linked list from an array of integers.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * 
 * Return: Pointer to the head of the list.
 */
listint_t *create_list(int *array, size_t size)
{
    listint_t *head = NULL, *new_node, *current;
    size_t i;

    for (i = 0; i < size; i++)
    {
        new_node = malloc(sizeof(listint_t));
        if (!new_node)
            return (NULL);
        new_node->n = array[i];
        new_node->index = i;
        new_node->next = NULL;
        if (head == NULL)
        {
            head = new_node;
            current = head;
        }
        else
        {
            current->next = new_node;
            current = new_node;
        }
    }

    return (head);
}

/**
 * free_list - Frees a singly linked list.
 * @list: Pointer to the head of the list.
 */
void free_list(listint_t *list)
{
    listint_t *temp;

    while (list)
    {
        temp = list;
        list = list->next;
        free(temp);
    }
}

/**
 * print_list - Prints a singly linked list.
 * @list: Pointer to the head of the list.
 */
void print_list(const listint_t *list)
{
    while (list)
    {
        printf("Index[%lu] = [%d]\n", list->index, list->n);
        list = list->next;
    }
}

