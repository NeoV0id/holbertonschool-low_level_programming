#include <stdio.h>

/**
 * main - will print the 50 first fibonacci numbers
 * Return: 0 for success
 */

int main(void)
{
	int i;
	int j[50];

	for (i = 0; i <= 50; i++)
	{
		if (i == 0)
			j[i] = 1;

		else if (j[i] == 1)
			j[i] += 1;

		else
			j[i] += j[i - 1];
		
		printf("%d, ", j[i]);

	}

	printf("\n");
	return (0);

}

