#include <stdlib.h>

/**
 * malloc_checked - should cause normal process termination with a status value
 * @b: size of place to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(b);

	if (check == 0)
	{
		exit(98);
	}

	else if (b == 0)
	{
		exit(98);
	}

	return (check);
}
