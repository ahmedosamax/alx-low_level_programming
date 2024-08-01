#include "lists.h"
/**
 * add_node_end - adding a new node at the end
 * @head: pointer to a pointer of the head of list
 * @str: string to be dub
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int counter = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!new_node)
		return (NULL);
	while (str[counter])
		counter++;
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = counter;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
