#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 */

int loop(va_list *arg, ...)
{
	int i;
	int n;
	int *arr;
	char *str;
	char limit;

	arg[0] = va_start (arguments, n);
	arg[1] = va_arg (arguments, str);
	arg[2] = va_arg (arguments, limit);
	arg[3] = va_arg (arguments, arr);

	i = 0;

	if (n == NULL)
		return (-1);

	while (i < n)
	{
		if (str == NULL)
			continue;
		else
		{
			if (limit == NULL)
				_putchar(str[i]);
				continue;
			else
				while (str[i] != limit)
					_putchar(str[i]);
		}

		if (arr == NULL)
			continue;
		else
			printf("%d", arr[i]);
	}

	return (i);
}
