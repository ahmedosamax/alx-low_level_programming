#include "lists.h"

/**
 * listint_len - function return number of elemnets
 * @h: pointer to the linked list
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
