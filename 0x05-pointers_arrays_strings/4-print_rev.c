#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	j = i - 1;
	for (i = j; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
