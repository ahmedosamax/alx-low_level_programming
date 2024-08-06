#include "lists.h"

/**
 * insert_nodeint_at_index - insert element in a given index
 * @head: pointer to the first elemnent
 * @idx: the index
 * @n: data we want to insert
 * Return: pointer to the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *tmp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ptr->next = tmp->next;
			tmp->next = ptr;
			return (ptr);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
