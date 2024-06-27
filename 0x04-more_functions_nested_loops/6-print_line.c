#include "main.h"
/**
 * print_line - print '_'
 * @n: the input Where n is the number of _ should be printed
 * Return: 0 if success
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
