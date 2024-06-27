#include "main.h"
/**
 * print_square - print square in shape of '#'
 * @size: the input Where n is the number of l of the square should be printed
 * Return: 0 if success
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size ; i++)
		{
			int j;

			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	return (0);
}
