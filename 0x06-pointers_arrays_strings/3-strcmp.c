#include "main.h"

/**
*_strcmp - Compares pointer to string
*@s1: A pointer to thr first string
*@s2: A pointer to the second string
*Return: if str1 < str2, the negative difference
*If str1 == str2, 0
*If str1 > str2, the positive difference
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
