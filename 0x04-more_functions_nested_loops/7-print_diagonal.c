#include "main.h"
/**
 * print_line - print '\'
 * @n: the input Where n is the number of \ should be printed
 * Return: 0 if success
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar('\\');
			n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
