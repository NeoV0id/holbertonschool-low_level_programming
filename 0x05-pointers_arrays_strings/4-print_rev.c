#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int i;

	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
