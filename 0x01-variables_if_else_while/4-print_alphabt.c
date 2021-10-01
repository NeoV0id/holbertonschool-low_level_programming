#include <stdio.h>

/**
 * main - this function will print out the alphabet
 * putchar - will display the alphabet (replace printf)
 * @char: is the string of alphabet
 * Return: will return 0
 */

int main(void)
{
char a[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
i = 0;
 while
/**
 * We'll use for instead of while, describe what i does and then we'll put a while
 */
  (i < 26)
{
i++;
if
(i != 5)
{
putchar(a[i]);
}
else if
(i != 17)
{
putchar(a[i]);
}
}
putchar('\n');

return (0);
}
