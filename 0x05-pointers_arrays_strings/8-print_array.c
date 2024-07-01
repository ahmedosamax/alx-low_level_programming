#include "main.h"
/**
 * print_array - prints arrays of numbers
 * @a: the number to pe printed
 * @n: the size of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
		i++;
	}
	_putchar('\n');
}
