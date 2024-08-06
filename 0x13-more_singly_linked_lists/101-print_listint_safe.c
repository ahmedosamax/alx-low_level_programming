#include "lists.h"
/**
 * print_listint_safe - print list with loop.
 * @head: pointer to the first element
 * Return: the new element
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *ptr = NULL;
	size_t count = 0;
	size_t nw;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		ptr = head;
		nw = 0;
		while (nw < count)
		{
			if (tmp == ptr)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			ptr = ptr->next;
			nw++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
