#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to count
 * @accept: string to compare
 *
 * Return: the number of bytes in the initial segment of the string s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	i = 0;
	j = 0;

	while ((s[i] != '\0') && (s[i] != '\0'))
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				n++;
			}

			j++;
			continue;
		}

		++i;
	}

	return (n);
}
