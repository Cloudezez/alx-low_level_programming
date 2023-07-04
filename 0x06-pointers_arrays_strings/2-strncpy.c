#include "main.h"

/**
*_strncpy - copies at most an inputed number
*@dest: The buffer storing string
*@src: Thhe source code
*@n: the maximum number o bytes bo copy to src
*Return: A pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index])
	src_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];
	for (index = src_len; index < n; index++)
	dest[index] = '\0';
	return (dest);
}
