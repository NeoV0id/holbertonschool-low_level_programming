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
	unsigned int i;
	char *p;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
