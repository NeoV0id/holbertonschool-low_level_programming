#include "main.h"

/**
 * string_toupper - change lowercase character to uppercase
 *
 * Return: the changed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] > 61 && str[i] <= 122)

		_putchar(str[i - 32]);
	}

	return (str);
}
