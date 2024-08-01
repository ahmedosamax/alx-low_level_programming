#include "lists.h"
/**
 * list_len - give the number of elements
 * @h: pointer to the single linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
