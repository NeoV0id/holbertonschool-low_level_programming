#include "main.h"

/**
 * _isupper - check for uppercase caracter
 * @c: is the caracter to check
 *
 * Return: 1 for uppercase; 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
