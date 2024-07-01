#include "main.h"
/**
 * print_array - prints arrays of numbers
 * @a: the number to pe printed
 * @n: the size of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		printf("%d",(a[i]));
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
