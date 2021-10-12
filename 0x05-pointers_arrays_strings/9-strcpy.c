#include "main.h"

/**
 * _strcpy -  copies a string
 * @dest: copy
 * @src: source string
 *
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{

		continue;

	}

	j = 0;
	while (j <= i)
	{

		dest[j] = src[j];
		j++;

	}
	return (dest);
}
