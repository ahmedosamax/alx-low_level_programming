#include "main.h"

/**
 * set_bit - set value of given bit in spec index
 * @n: number to be setted
 * @index: index
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
