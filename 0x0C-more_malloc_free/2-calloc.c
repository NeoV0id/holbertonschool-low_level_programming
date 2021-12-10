#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of type
 *
 * Return: pointer to the allocate space for the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *p;
	unsigned int i;

	p = malloc(size);

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	else if (p == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < nmemb; i++)
		{
			p[i] = '\0';
		}
	}

	return (p);
}
