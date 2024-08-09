#include "main.h"

/**
 * get_endianness - check for endian
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
