#include <unistd.h>
#include "my_lib.h"

/**
 * my_putchar - write char
 * @c: char to print
 *
 * Return: string
 */

int my_putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char *quote = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; quote[i] != '\0'; i++)
	{
		my_putchar(quote[i]);
	}

	return (1);
}
