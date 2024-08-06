#include "lists.h"

/**
 * add_nodeint_end - add element at end of list
 * @head: pointer to the first elemnt
 * @n: data we want to insert it
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tmp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = ptr;

	return (ptr);
}
