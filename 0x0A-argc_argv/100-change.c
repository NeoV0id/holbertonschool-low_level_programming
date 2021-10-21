#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to change for an amount of money.
 * @argc: integer
 * @argv: string
 *
 * Return: 0 for success, 1 for failure
 */

int main(int argc, char *argv[])
{
	int c;
	int d;

	d = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	c = atoi(argv[1]);

	while (c > 0)
	{
		d++;

		if ((c - 25) >= 0)
		{
			c -= 25;

			continue;
		}

		if ((c - 10) >= 0)
		{
			c -= 10;
			continue;
		}

		if ((c - 5) >= 0)
		{
			c -= 5;

			continue;
		}
		if ((c - 2) >= 0)
		{
			c -= 2;

			continue;
		}
	c--;

	}

	printf("%d\n", d);

	return (0);
}
