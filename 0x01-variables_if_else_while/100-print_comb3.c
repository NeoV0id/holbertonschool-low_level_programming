#include <stdio.h>

/**
 * print_comb3 - prints all possible different combinations of two digits
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i > j)
			{
				putchar(j);
				putchar(i);

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
