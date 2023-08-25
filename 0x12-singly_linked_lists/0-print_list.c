#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: the linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		no_of_nodes++;

		h = h->next;
	}

	return (no_of_nodes);
}
