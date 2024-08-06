#include "lists.h"

/**
 * find_listint_loop - find loop in list
 * @head: pointer to the linked list
 * Return: adr to the starting of the loop in the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *ft = head;

	if (!head)
		return (NULL);

	while (sl && ft && ft->next)
	{
		ft = ft->next->next;
		sl = sl->next;
		if (ft == sl)
		{
			sl = head;
			while (sl != ft)
			{
				sl = sl->next;
				ft = ft->next;
			}
			return (ft);
		}
	}

	return (NULL);
}
