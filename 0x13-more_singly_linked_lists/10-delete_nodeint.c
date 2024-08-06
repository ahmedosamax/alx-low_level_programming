#include "lists.h"

/**
 * delete_nodeint_at_index - deletes an element in the linked list in index
 * @head: pointer to the list
 * @index: index of the element
 * Return: 1 if sucess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}


	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}
