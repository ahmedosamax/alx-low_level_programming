#include "main.h"
/**
 * str_concat - concatenate 2 strings
 * @s1: the first array
 * @s2: the second array
 * Return: array
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int count;
	char *ptr;
	int x;
	int y;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	count = i + j;
	ptr = (char *) malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{	
		for (x = 0; x < i ; x++)
		ptr[x] = s1[x];
	}
	if (s2 != NULL)
	{
		for (y = 0; y < j; y++)
		{
			ptr[x] = s2[y];
			x++;
		}
	}
	return (ptr);
}
