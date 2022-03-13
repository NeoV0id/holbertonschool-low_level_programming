#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to check
 * @size: size of the array
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}