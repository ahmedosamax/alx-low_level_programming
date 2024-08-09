#include "main.h"
#include <stdio.h>

/**
 * flip_bits - convert num to another
 * @n: the number wan to be conv
 * @m: the new number
 * Return: the new number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count;

	i = n ^ m;
	count = 0;

	while (i)
	{
		count++;
		i &= (i - 1);
	}

	return (count);
}
