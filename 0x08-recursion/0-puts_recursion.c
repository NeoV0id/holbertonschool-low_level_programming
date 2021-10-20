#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);

		s += 1;

		_puts_recursion(s);
	}

	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
