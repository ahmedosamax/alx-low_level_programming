#include "lists.h"

/**
 * sum_listint - git the sum of all element in the list
 * @head: first element in the list
 * Return: the sum of elements
 */
int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		summ += tmp->n;
		tmp = tmp->next;
	}

	return (summ);
}
