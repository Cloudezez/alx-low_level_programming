#include "main.h"

/**
*_puts - print the string
*@str: The string to print
*Return: void
*/

void _puts(char *str)
{
	for (; *str != '\00'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

