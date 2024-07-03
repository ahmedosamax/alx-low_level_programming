#include "main.h"
/**
 * *leet -  function ncodes a string into 1337.
 * @a: the array of numbers
 * Return: the array of numbers and character
 */
char *leet(char *a)
{
	char *s = "aAeEoOtTlL";
	char *n = "4433007711";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[i] == s[j])
				a[i] = n[j];
		}
	}
	return (a);
}
