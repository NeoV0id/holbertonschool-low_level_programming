#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary char
 *
 * Return: the converted unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; i != '\0'; i++)
	{

		if ((b[i] != 'b') && (b[i] != '0') && (b[i] != '1'))
			return (0);

		else
		{
			while (i != '\0')
			{
				if (b[i] == '1')
					n = i * 2;

				else if (b[i] == '\0' - 1)
				{
					if (b[i] == '1')
						n = n + 1;
				}
			}
		}
	}
	return (n);
}
