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
	int count;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	count = n - 1;
	ptr = (char *) malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= count; i++)
		ptr[i] = str[i];
	return (ptr);
}
