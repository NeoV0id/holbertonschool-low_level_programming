#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }
/**
 * The i doesn't increment, so it is always smaller than 10, therefore it will
 * continue printing i forever.
 */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
