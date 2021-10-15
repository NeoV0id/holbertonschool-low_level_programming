#include "main.h"

/**
 * cap_string - capitalize all characters of a string
 *
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 0)
		{
			if (str[i] >= 61 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
		if (str[i] == ' ' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')'|| str[i] == '{' ||
		    str[i] == '}' || str[i] == 9 || str[i] == '\n')
		{
			++i;

			if (str[i] >= 61 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
	}
	return (str);
}
