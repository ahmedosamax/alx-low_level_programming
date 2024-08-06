#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: pointer to the first elemetn in the list
 * Return: ptr to head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr = NULL;
	listint_t *nx = NULL;

	while (*head)
	{
		nx = (*head)->next;
		(*head)->next = pr;
		pr = *head;
		*head = nx;
	}

	*head = pr;

	return (*head);
}
