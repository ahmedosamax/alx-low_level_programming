#include "main.h"
/**
 * print_diagonal - print '\'
 * @n: the input Where n is the number of \ should be printed
 * Return: 0 if success
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j <= i; j++)
			{
				if (j == 0)
				{
					continue;
				}
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
