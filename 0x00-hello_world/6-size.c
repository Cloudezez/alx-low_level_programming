#include <stdio.h>

/**
*main - entry point
*Return: Always 0
*/

int main(void)

{
	printf("size of a char: %zu bytes(s)\n", sizeof(char));

	printf("size of an int: %zu byte(s)\n", sizeof(int));
	print("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float %zu byte(s)\n", sizeof(float));

	return (0);
}
