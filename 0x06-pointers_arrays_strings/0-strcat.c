#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to concatenates in second
 * @src: string to put first
 *
 * Return: the concatenated string (char *)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		if(dest[i]+1 == '\0')
		{
			for(j = 0; src[j] != '\0'; j++)
				dest[i] = src[j];
		}
		i++;
	}
	return (dest);
}
