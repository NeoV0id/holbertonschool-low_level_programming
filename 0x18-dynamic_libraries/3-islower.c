#include "main.h"

/**
 * _islower - will check if letters are in lower or upper case
 * @c: character to check
 *
 * Return: 1 if it is lowercase else it'll return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
		return (0);
}
