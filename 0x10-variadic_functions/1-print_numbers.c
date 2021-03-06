#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: const char
 * @n:const unsigned int
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, print;

	va_list(ap);
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		print = va_arg(ap, unsigned int);
		printf("%d", print);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
