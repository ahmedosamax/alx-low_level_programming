#include "main.h"
/**
 * _strdup - create a duplication from entered string
 * @str: the array meant to be dublicated
 * Return: array
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	ptr = (char *) malloc(n * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
		ptr[i] = str[i];
	return (ptr);
}
