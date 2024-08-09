#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clear bit at given index
 * @n: pointer to number
 * @index: the index
 * Return: 1 on successs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (i = 1; h > 0; i *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
