#include <stdlib.h>
#include "main.h"

/**
 * _strdup() -  returns a pointer to a new string which is a duplicate of str
 * @str: string to copy
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: char
 * Return: pointer to the duplicated string or NULL.
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int j;
	char *cpy;

	if (str == NULL)
	{
		return (0);
	}
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	cpy = malloc(sizeof(char) * j + 1);

	if (cpy == NULL)
	{
		return (0);
	}

	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			cpy[i] = str[i];
			i++;
		}
		cpy[i] = '\0';
		return (s);
	}
}
