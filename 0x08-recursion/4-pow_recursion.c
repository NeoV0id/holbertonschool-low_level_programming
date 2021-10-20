#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to raise
 * @y: power
 *
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int n;

	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	n = _pow_recursion(x, y / 2);

	if (y % 2 == 0)
	{
		return (n * n);
	}

	return (x * n * n);
}
