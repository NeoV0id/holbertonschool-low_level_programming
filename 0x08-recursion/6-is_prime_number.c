#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise
 * return 0
 *@n: integer.
 * Return: integer.
 */

int is_prime_number(int n)
{
	int j;

	if (j = 2 && j < n)
	{
		j++;
	}

	if((n % j) == 0)
	{
		return (1);
	}

	if (n == 1)
	{
		return 0;
	}
}
