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

	n = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		j = 0;

		while (s[j] != '\0' && s[j] != ' ')
		{
			if (accept[i] == s[j])
			{
				n++;
				j++;
			}

			else if (accept[i] != s[j])
			{
				j++;
			}
		}
	}

	return (n);
}
