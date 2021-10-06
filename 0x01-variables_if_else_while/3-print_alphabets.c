#include <stdio.h>

/**
 * main - this function will print out the alphabet
 *
 * Return: will return 0
 */

int main(void)
{

char a[26] = "abcdefghijklmnopqrstuvwxyz";
char b[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for
(i = 0;
i < 26;
i++)
{
	putchar(a[i]);
}
for
(i = 0;
i < 26;
i++)
{
putchar(b[i]);
}
putchar('\n');

return (0);
}
