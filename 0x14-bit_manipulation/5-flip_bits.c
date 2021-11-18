#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to check
 * @m: number from which the function will calculate
 *
 * Return: the number of bits you would need to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	if (n > m)
	{
		for (i = 0; n > m; i++)
			n = n >> 1;
	}

	else if (m > n)
	{
		for (i = 0; m > n; i++)
			m = m >> 1;
	}
	return (i);
}
