#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	while ((*ht)->array->next != NULL)
	{
		free((*ht)->array);
		(*ht)->array = (*ht)->array->next;
	}
}
