#include "main.h"

/**
*_mempy - copy stored data
*@dest: copied data
*src: copied integer
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for(; r < i; r++)
	{
	dest[r]=src[r];
	n--;
	}
	return (dest);
}
