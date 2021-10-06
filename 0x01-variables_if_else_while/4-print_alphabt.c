#include <stdio.h>

/**
 * main - this function will print out the alphabet
 *
 * Return: will return 0
 */

int main(void)
{
char a[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for
	(i = 0;
	 i < 26;
	 i++)
{
	if (!(i == 4 || i == 16))
	{
	putchar(a[i]);
	}
}

putchar('\n');

return (0);
}
