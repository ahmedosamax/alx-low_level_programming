#include "lists.h"

/**
 * free_listint_safe - free a linked list
 * @h: ptr to the head of list
 * Return: the number of element freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int i;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}
