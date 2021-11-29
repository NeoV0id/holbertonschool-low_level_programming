#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			while (i != 57)
			{
				if (i > j)
				{
					putchar(j);
					putchar(i);
				}
				if (j < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
