#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - print times table of n
 * @n: number to use
 *
 */

void print_times_table(int n)
{
	int i = 0;
	int j;

	if (n < 0 || n > 15)
		return;

	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", j * i);
			if (j < n)
			{
				if ((j * i) < 10)
					printf(",   ");
				else if ((j * i) < 100 && (i * j) > 10)
					printf(",  ");
				else if ((i * j + 1) >= 10)
					printf(",  ");
				else if ((j * i) > 100 || (i * j + 1) >= 100)
					printf(", ");
			}
		}
	printf("\n");
	i++;
	}
}
