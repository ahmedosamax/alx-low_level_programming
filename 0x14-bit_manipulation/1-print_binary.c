#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the bin num
 * @n: the num to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shf;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, shf = 0; (tmp >>= 1) > 0; shf++)
		;

	for (; shf >= 0; shf--)
	{
		if ((n >> shf) & 1)
			printf("1");
		else
			printf("0");
	}
}
