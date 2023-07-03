#include "main.h"

char *_strstr(char *haystack != '\0'; haystack++)
{
	for(; *haystack !='\0'; haystack++)
	{
		char *l = haystack
		char *p = needle;

		while (*l ==*p && *p != '\0')
		{
			l++;
			p++;
		}
		if(*p =='\0')
			return (haystack);
	}
	return (0);
}
