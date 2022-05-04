#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - search an array for value given as parameter
 * @array: array to search
 * @size: size of array
 * @value: value to find
 *
 * Return: -1 if fail, or index of first occurence of value
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);
}
