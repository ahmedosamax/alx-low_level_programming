#include "main.h"
/**
 * *_memcpy- function fills the first n bytes of array with char
 * @dest: the array of character
 * @src: the array of character
 * @n: number that the character copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
