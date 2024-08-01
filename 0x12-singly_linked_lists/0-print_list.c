#include "lists.h"
/**
 * print_list- print a single linked list with number of element
 * @h: pointer the single list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil) \n");
		else
			printf("[%u] %s \n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
