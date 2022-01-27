#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	if(ht == NULL)
		return;

	printf("{");

	while(ht->array[index] != NULL)
	{
		printf("'{:s}':'{:s}'", ht->array[index]->key, ht->array[index]->value);

		if(ht->array[index]->next != NULL)
		{
			printf("}");
			break;
		}
		
		ht->array[index] = ht->array[index]->next;
	}
}
