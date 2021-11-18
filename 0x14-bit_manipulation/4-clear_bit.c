#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n:
 * @index:
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
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
			stock = n[i] & 1;
		}

	}

	return (1);
}
