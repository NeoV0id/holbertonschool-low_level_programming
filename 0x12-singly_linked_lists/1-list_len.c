#include <stddef.h>
#include "lists.h"

/**
 * list_len - count a list's length
 * @h: pointer
 *
 * Return: size
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
