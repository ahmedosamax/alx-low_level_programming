#include "main.h"
/**
 * *_memset - function fills the first n bytes of array with char
 * @s: the array of character
 * @b: the character to be copied
 * @n: number that the character copied
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
