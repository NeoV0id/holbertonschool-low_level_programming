#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to concatenates in second
 * @src: string to put first
 *
 * Return: the concatenated string (char *)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
