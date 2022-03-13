#include "hash_tables.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the hash_node_t list to print
 */
void print_list(hash_node_t *h)
{
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		if (h->next)
			printf(", ");
		h = h->next;
	}
}

/**
 * free_list - frees a linked list
 * @head: hash_node_t list to be freed
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}