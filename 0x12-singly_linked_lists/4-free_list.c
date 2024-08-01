#include "lists.h"
/**
 * free_list - dellocate single linked list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
