#include "main.h"

/**
 * reverse_array - reverse arrays
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int num;

	for (i = 0; i < n; ++i)
	{
	        while (a[i] == 0)
		{
			num = a[i];
		}
		while (a[i] == a[n])
		{
			a[0] = a[n];
			a[n] = num;
		}
		while ((a[i] < a[n]) && (a[i] > a[0]))
		{
			a[n -1] = a[n] / 2;
		}
	}
}
