#include <stdio.h>

/**
 * main - this function will print out the alphabet
 *
 * putchar - will display the alphabet (replace printf)
 * @char: is the string of alphabet
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
	putchar(a[i]);
}
putchar('\n');

return (0);
}
