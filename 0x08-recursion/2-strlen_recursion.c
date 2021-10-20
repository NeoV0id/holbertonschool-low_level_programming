#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 *
 * Return: number of bytes
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s != '\0')
	{
		n++;

		_strlen_recursion(++s);
	}

	else
	{
		return (n);
	}
}
