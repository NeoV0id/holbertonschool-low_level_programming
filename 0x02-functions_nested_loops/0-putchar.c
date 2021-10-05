#include <unistd.h>
/**
 * main - will print out a string with putchar
 * @char: contains my string
 * Return: will return 0 (success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int i;

	for
		(i = 0;
		 i < 9;
		 i++);
	write(1, &c, 8);
	write(1, "\n", 1);

	return (0);
}
