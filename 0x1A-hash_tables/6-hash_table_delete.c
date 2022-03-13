#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}