#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return an int according to the comparaison made
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;

	while (i < s2[j] && j < s1[i])
	{
		i++;
		j++;

		if (s1[i] < s2[j])
		{
			n = -15;
		}

		else if (s1[i] > s2[i])
		{
			n = 15;
		}

		else if (s1[i] == s2[i])
		{
			n = 0;
		}
	}

	return (n);
}
