#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n: starting value
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
