#include "lists.h"

/**
 * pop_listint - delete the first element in the list
 * @head: the first element of the list
 * Return: append the data deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
