#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: is an integer
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (n = n * -1);
}
return (0);
}
