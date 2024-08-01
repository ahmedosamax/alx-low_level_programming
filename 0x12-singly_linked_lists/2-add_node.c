#include "lists.h"
/**
 * _strlen - int function calculate the number of character in string
 * @s: pointer points on 1st character in the string
 * Return: counter
 */
unsigned int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node =malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	*head = new_node;
	return (new_node);
}
