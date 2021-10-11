#include "main.h"

/**
 * swap_int - swap the value of to integer
 * @a: integer a (to switch with int b)
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
