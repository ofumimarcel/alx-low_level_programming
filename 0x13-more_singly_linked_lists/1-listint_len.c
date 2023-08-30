#include "lists.h"

/**
 * listint_len - returns no of elements in a linked list
 * @h: list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		no_of_nodes += 1;
		h = h->next;
	}

	return (no_of_nodes);
}
