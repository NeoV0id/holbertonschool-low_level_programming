#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums  all the parameters of a function
 * @n: number of arguments to add
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int add;
	unsigned int i;

	add = 0;

	va_list(ap);
	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		add += va_arg(ap, unsigned int);
		va_end(ap);
	}

	return (add);
}
