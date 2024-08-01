#include "lists.h"
/**
 * add_node - adding a new node at the beginning
 * @head: pointer to a pointer of the head of list
 * @str: string to be dub
 * Return: the  new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	unsigned int counter = 0;

	while (str[counter])
		counter++;
	if (!new_node)
		return (NULL);
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = counter;
	*head = new_node;
	return (*head);
}
