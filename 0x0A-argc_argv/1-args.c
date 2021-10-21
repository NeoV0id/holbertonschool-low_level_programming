#include <stdio.h>

/**
 * main - prints the number of arguments pass to it
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 for success
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
