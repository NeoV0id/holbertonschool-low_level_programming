#include "main.h"

/**
 * fizz_buzz - execute fizz buzz test
 */

void fizz_buzz(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{

		if (i < 10)
		{
			_putchar(i + '0');
		}
		else if (i > 10)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else if (i % 3 == 0)
			
