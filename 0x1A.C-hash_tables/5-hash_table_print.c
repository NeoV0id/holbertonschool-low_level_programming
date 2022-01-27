#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	
	while(ht->array[index]->next != NULL)
	{
		printf("'{:s}':'{:s}'", 
}
