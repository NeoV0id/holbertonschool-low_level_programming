#include <stdlib.h>

/**
 * malloc_checked - should cause normal process termination with a status value
 * @b:
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *check;
	int failure = 98;
	int *fail = &failure;
	check = malloc(b);

	if (b == 0)
	{
		return (0);
	}

	else if (check == 0)
	{
		return (fail);
	}

	return (check);
}
