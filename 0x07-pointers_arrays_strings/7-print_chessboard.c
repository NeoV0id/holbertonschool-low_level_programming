#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: bytes to print on the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(j);

			if (a[j] == a[8])
			{
				_putchar('\n');
			}
		}
	}
}
