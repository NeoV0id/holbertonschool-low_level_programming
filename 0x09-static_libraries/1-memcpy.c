#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: copy of src
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
