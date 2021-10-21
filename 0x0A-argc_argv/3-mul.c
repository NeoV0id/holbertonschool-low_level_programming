#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply arguments (integers)
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int j;

	j = 0;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		j = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", j);

	}

	return (0);
}
