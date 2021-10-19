#include "main.h"
#include <stdlib.h>

/**
 * _strstr - returns the pointer of the first occurrence of string accept
 * @haystack: string to search
 * @needle: string to find
 *
 * Return: the pointer to the location of the string needle from the first char
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}

			j++;
		}

		if (haystack[i] == '\0')
		{
			break;
		}
	}

	return (NULL);
}
