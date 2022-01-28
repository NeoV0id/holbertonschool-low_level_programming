#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new hash table NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	if (!(size) || size == 0)
		return (NULL);

	hash = malloc(sizeof(hash_node_t) * size);

	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t) * size);

	return (hash);
}
