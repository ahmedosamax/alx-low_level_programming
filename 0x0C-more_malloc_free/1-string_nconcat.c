#include "main.h"
/**
 * *string_nconcat - concatenate 2 strings
 * @s1: the first array
 * @s2: the second array
 * @n: integer of array
 * Return: array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int count;
	char *ptr;
	unsigned int x;
	unsigned int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; j < n && s2[j] != '\0'; j++)
		;
	count = i + j;
	ptr = (char *) malloc((count + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < i ; x++)
		ptr[x] = s1[x];
	for (y = 0; y < j; y++)
	{
		ptr[x] = s2[y];
		x++;
	}
	ptr[x + 1] = '\0';
	return (ptr);
}
