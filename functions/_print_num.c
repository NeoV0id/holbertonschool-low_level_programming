#include "func.h"

/**
 * _print_num - C program to print a long int number using _putchar() only
 * @n: number to print
 */

void _print_num(int n)
{
	/**
	 * If number is smaller than 0, put a - sign
	 * and change number to positive
	 */
	if (n < 0) {
		_putchar('-');
		n = -n;
	}

	/**
	 * Remove the last digit and recur
	 */

	if (n/10)
		_print_num(n/10);

	/**
	 * Print the last digit
	 */
	_putchar(n%10 + '0');
}
