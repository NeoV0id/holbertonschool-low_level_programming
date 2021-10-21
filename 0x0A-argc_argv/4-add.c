#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int n;

	n = 0;

	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n = n + atoi(argv[i]);
	}
	printf("%d\n", n);

	return (0);
}
