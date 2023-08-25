#include "lists.h"

/**
 * list_len - prints length linked list
 * @h: the linked list
 * Return: number of nodes in list
 */

size_t list_len(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		no_of_nodes++;
		h = h->next;
	}

	return (no_of_nodes);
}
