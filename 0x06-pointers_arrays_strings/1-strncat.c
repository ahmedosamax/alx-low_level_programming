#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * @src: the array of character
 * @dest: the array of character
 * @n : the max number to be concatenate
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i]='\0';
	return (dest);
}
