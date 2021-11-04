#include <stdio.h>
#include "function_pointers.h"

/**
 * array_interator - executes a function given as a parameter on the whole array
 * @array: array where to execute the function
 * @size: size of the array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if ((action != NULL) || (array != NULL))
	{
		long unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
