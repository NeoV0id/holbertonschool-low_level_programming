#include "main.h"

/**
 * cap_string - capitalize all characters of a string
 * @str: string to capitalize
 *
 * Return: the capitalized string
 */

char *cap_string(char *str)
{
	int i;
	char s[13] = { ' ', '\n', '\t', '!', '?', ';', ',', '.', '"', '(', ')',
		       '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 0)
		{
			if (str[i] >= 61 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		if (str[i] == s[0] || str[i] == s[1] || str[i] == s[2] ||
		    str[i] == s[3] || str[i] == s[4] || str[i] == s[5] ||
		    str[i] == s[6] || str[i] == s[7] || str[i] == s[8] ||
		    str[i] == s[9] || str[i] == s[10] || str[i] == s[11])
		{
			++i;

			if (str[i] >= 61 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				++i;
			}
		}
	}
	return (str);
}
