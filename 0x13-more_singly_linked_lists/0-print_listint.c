#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints a linked list
 * @h: list to print
 *
 * Return: size of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
