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

	for(i = 0; src[i] != '\0'; i++);

	for(j=0; dest[j]!='\0'; j++)
   {
	   i++;
	   src[i] = dest[j];

   }
	src[i] = '\0';

	return (src);
}
