#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function to execute
 *
 * Return: an int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int check;

	if ((array != NULL) || (cmp != NULL))
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			check = cmp(array[i]);
			if (check == 1)
			{
				return (i);
			}

		}
	}

	return (-1);
}
