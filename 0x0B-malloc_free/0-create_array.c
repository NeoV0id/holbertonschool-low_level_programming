#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create an initialized array
 * @c: character to initialize array
 * @size: size of the array (in bytes)
 *
 * Return: NULL if size = 0 or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	else if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
