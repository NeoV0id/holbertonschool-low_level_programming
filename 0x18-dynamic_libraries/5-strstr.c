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

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{

			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
			break;
		}

		i++;
		j++;

	}

	return (0);
}
