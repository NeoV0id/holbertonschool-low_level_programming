#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	char *last_key = NULL;
	unsigned long int index;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			node = ht->array[i];
	}

	printf("{");

	if (node)
	{
		last_key = node->key;
		index = key_index((const unsigned char *)last_key, ht->size);
		for (i = 0; i < ht->size; i++)
		{
			print_list(ht->array[i]);
			if (ht->array[i] && i < index)
				printf(", ");
		}
	}

	printf("}\n");
}