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
		printf("%d, ", a[i]);
		i++;
	}
}
