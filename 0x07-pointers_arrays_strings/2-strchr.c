#include "main.h"
#include <stdlib.h>

/**
 * _strchr - returns the pointer of the first occurrence of char c
 * @s: string to search
 * @c: character to find
 *
 * Return: the pointer to the location of the first char c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}

		if (s[i] == '\0')
		{
			return (NULL);
		}
	}
	return (&s[i]);
}
