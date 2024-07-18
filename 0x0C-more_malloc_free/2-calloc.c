#include "main.h"
/**
 * *_calloc - allocates memory using calloc
 * @size: number of bytes to allocate
 * @nmemb: number of element of array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
