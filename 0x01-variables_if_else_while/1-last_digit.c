#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - will display last digits of n and will compare it to other digits
 * Return: will probably return 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int ln;

for
(ln = (n % 10));
{
printf("Last digit of %d" (n));
}
if ln > 5
{
printf("is %d and is greater than 5\n", (ln));
}
else if (ln == 0)
{
printf("is %d and is 0\n", (ln));
}
else if (ln < 6 && != 0)
{
printf("is %d and is less than 6 and not 0\n", (ln));
}
else
printf("You made a mistake in your code, idiot !\n");

return (0);
}
