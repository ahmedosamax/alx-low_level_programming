#include "lists.h"

/**
 * get_nodeint_at_index - get the element which index is given
 * @head: 1st element in list
 * @index: the index of element we want to get
 * Return: ptr to the node 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
