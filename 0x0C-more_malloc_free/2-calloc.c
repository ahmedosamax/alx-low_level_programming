#include "main.h"
/**
 * *_calloc - allocates memory using calloc
 * @size: number of bytes to allocate
 * @nmemb: number of element of array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
