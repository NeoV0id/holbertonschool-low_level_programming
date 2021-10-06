#include "main.h"

/**
 * print_sign - check the sign of a number
 * @n: is a number
 *
 * Return: 1 if sign is +, 0 if n is 0 and -1 if sign is -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
