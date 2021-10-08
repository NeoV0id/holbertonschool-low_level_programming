#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal
 * @n: size of the diagonal
 */

void print_diagonal(int n)
{
	int i;
	int d;
	int e;
	int j;

	d = 92;
	e = 27;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar(d);
			else
				_putchar(e);
		}

		_putchar('\n');
	}
}
