#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head pointer
 * @idx: index to insert new node
 * @n: new node's data
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 0;
	listint_t *newnode, *tmp;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	tmp = *head;

	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}

	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
