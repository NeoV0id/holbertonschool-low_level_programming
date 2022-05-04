#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - search in binary type in an array for value
 * @array: array to check
 * @size: size of array
 * @value: value to find
 *
 * Return: -1 in case of failure, index of value
 */

int binary_search(int *array, size_t size, int value)
{
        unsigned int i, j, n;

	if (array == NULL)
		return (-1);

	for (i = 0, j = size - 1; j >= i;)
	{
		printf("Searching in array: ");
		for (n = i; n < j; n++)
			printf("%d, ", array[n]);

		printf("%d\n", array[n]);

		n = i + (j - i) / 2;

		if (array[n] == value)
			return (n);
		if (array[n] > value)
			j = n - 1;
		else
			i = n + 1;
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
