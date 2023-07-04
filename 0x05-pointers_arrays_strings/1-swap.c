#include "main.h"
#include <stdio.h>

/**
*swap_int - Swaps the value of two integers
*@a: The irst integer to swapped
*@b: The second integer to swapped
*Return: noting
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
