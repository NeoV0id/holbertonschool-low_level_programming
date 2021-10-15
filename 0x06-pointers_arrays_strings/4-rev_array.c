#include "main.h"

/**
 * reverse_array - reverse arrays
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int i;
	int j;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;

		i++;
		n--;
	}
}
