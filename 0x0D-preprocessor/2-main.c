#include <stdio.h>

/**
 * main - prints the name it was compiled from
 *
 * Return: 0 for success
 */

int main(void)
{
	char prog[] =__FILE__;

	printf("%s\n", prog);

	return (0);
}
