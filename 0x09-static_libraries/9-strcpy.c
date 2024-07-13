#include "main.h"
/**
 * _strcpy - copy string into buffer
 * @src: the array of character
 * @dest: the array of character
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
