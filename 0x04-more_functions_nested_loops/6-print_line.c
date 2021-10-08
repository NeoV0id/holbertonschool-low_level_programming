#include "main.h"

/**
 * print_line - print line
 * @n: size of the line
 */

void print_line(int n)
{
	int i;
	int l;

	l = 95;

	for (i = 0; i < n; i++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
