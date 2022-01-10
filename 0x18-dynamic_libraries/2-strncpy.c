#include "main.h"

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: destination of copied string
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (src[i] != '\0' && j < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	return (dest);
}
