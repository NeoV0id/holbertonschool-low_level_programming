#include <stdio.h>

/**
 * main - will print all natural number of 3 and 5 below 1024 excluded
 *
 * Return: 0 for success
 */

int main(void)
{
	int i = 0;
	int n;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			n += i;
		i++;
	}

	printf("%d\n", n);
	return (0);
}
