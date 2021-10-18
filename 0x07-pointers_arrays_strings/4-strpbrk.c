#include "main.h"
#include <stdlib.h>

/**
 * _strchr - returns the pointer of the first occurrence of char c
 * @s: string to search
 * @accept: string to find
 *
 * Return: the pointer to the location of the first char c
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}

		if (s[i] == '\0')
		{
			break;
		}
	}

	return (NULL);
}
