#include "main.h"
#include <stdio.h>

/**
*_strlen - Return the length o a string
*@str: The string to get the length of
*Return: The length of @str
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
