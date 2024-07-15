#include "main.h"
/**
 * create_array - create array of 3
 * @size: the size of array
 * @c: the first character of array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));
	if (size < 1)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
