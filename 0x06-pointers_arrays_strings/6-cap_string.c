#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @a: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *a)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (a[i] == spe[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] -= 32;
				}
			}
		}
	}

	return (a);
}
