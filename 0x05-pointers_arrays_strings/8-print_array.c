#include "main.h"
#include <stdio.h>

/**
 * print_array - print the whole array
 * @a: the array to print
 * @n: the number of value in the array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != n -1)
		{
			printf("%d, ", a[i]);
		}

		else
		{
			printf("%d\n", a[i]);
		}

		i++;
	}
}
