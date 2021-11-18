#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n:
 * @index: index of the bit to change
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned int stock;

	if (n == NULL || index == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (i = index - 1)
		{
			i++;
			stock = n[i] | 1;
		}

	}

	return (1);
}
