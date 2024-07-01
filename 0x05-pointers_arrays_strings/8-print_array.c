#include "main.h"
void print_array(int *a, int n)
{
	int i = 0;
	while (i <= n)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
