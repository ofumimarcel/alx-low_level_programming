#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer
 * @index: index to delete node
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *tmp1, *tmp2;

	if (*head == NULL)
		return (-1);

	tmp1 = *head;

	if (index == 0)
	{
		*head = tmp1->next;
		free(tmp1);
		return (1);
	}

	while (i < (index - 1) && tmp1 != NULL)
	{
		tmp1 = tmp1->next;
		i++;
	}

	if (i != (index - 1) || tmp1->next == NULL)
		return (-1);

	tmp2 = tmp1->next;
	tmp1->next = (tmp1->next)->next;
	free(tmp2);

	return (1);
}
