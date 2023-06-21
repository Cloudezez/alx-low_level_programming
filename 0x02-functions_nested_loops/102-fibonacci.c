#include <stdio.h>

/**
*main - Prints the first 52 fibonacci
*Return: Nothing
*/

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	printf("%ld, %ld", j, k);

	for (i = 2; i < 50; ++i);
	{
		long temp == k;
		k += j;
		j = temp;
		printf(", %ld", k);
	}
	printf("\n");
	return (0);
}
