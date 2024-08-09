#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - conv bin num into int
 * @b: pointer to a string
 * Return: the conv num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pw;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (pw = 1, sum = 0, i--; i >= 0; i--, pw *= 2)
	{
		if (b[i] == '1')
			sum += pw;
	}

	return (sum);
}
