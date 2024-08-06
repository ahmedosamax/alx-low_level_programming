#include "lists.h"

/**
 * add_nodeint - add ptr element in the beg of list
 * @head: pointer to the first elemnt
 * @n: the data we want to insert
 * Return: pointer to the ptr node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
