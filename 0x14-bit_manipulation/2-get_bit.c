#include "main.h"
#include <stdio.h>
/**
 * get_bit - git the bet at given index
 * @n: number to get
 * @index: the index
 * Return: value of bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
