#include "main.h"

/**
 * more_numbers - prints numbers (from 0 to 14) ten times
 *
 */

void more_numbers(void)
{
	int i;
	int j;
	char a;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
			a = (i + '0');
			_putchar(a);
		}
		else
		{
			a = (i / 10 + '0') + (i % 10 + '0')
				_putchar(a);
		}
	}
	_putchar('\n');
	}
}
