#include "main.h"
/**
 * _strncpy - copy strings
 * @src: the array of character
 * @dest: the array of character
 * @n : the max number to be coppied
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
