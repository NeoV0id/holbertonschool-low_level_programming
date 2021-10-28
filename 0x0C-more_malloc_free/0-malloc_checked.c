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
	int failure;
	int *fail;

	failure = 98;
	fail = &failure;

	check = malloc(b);

	if (check == NULL)
	{
		return (fail);
	}

	else if (b == 0)
	{
		return (fail);
	}

	return (check);
}
