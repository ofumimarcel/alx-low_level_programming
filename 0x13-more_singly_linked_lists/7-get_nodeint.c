#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to head pointer
 * @index: nth node
 * Return: nth node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		i++;
		head = head->next;
	}

	if (i == index)
		return (head);

	return (NULL);
}
