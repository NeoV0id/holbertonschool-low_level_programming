#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 */

void print_square(int size)
{
	int i;
	int j;
	int c;

	c = 35;

	if (size > 0)

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(c);
		}
		if (j == size)

			_putchar('\n');
	}
	else
		_putchar('\n');
}