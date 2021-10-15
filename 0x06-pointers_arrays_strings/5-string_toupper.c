#include "main.h"

/**
 * string_toupper - change lowercase character to uppercase
 *
 * Return: the changed string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
			i++;
	}
	return (str);
}
