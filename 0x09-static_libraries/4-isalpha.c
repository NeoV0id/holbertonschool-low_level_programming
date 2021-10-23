#include "main.h"

/**
 * _isalpha - will check if the input character is a letter
 * @c: character to check
 *
 * Return: 1 if it is else it'll return 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
