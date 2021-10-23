#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to the memory to fill
 * @b: char to fill the n bytes memory
 * @n: number of memory bytes to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
