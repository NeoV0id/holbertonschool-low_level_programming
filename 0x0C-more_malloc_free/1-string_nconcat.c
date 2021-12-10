#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: space to allocate
 *
 * Return: a pointer to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
       	unsigned int j; 
	unsigned int m; 
	unsigned int len;
	char *ptr;

	i = 0;
	j = 0;
	m = 0;
	len = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		j++;
	}
	if (n >= j)
		n = j;
	
	ptr = malloc(i + n + 1 * sizeof(char));
	
	if (ptr == NULL)
		return (NULL);
	for (m = 0; m < i; m++)
	{
		ptr[m] = s1[len];
		len++;
	}
	for (len = 0; len < n; len++)
	{
		ptr[m] = s2[len];
		m++;
	}
	
	ptr[m] = '\0';
	
	return (ptr);

}

