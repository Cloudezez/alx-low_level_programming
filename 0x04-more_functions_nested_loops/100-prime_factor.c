#include <stdio.h>
#include "main.h"
#include <math.h>

/**
*main - prints the largest prime numbers
*Return: Always 0
*/

int main(void)
{
	long x, maxf = 1;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 2; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	break;
	}
	}
	if (maxf == 1)
	{
	maxf = number;
	}
	printf("%ld\n", maxf);
	return (0);
}
