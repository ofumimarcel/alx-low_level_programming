#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: the list
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		no_of_nodes += 1;
		h = h->next;
	}

	return (no_of_nodes);
}
