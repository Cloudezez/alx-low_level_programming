#include "main.h"
#include <stdio.h>

/**
*_strlen - Return the length of string
*@s: The string to get the length of
*Return: The length of @s
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
