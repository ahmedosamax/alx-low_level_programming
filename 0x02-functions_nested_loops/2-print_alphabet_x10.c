#include "main.h"
/**
 * print_alphabet x10 - Entry point
 * Return:0
 */
void print_alphabet_x10(void)
{
	int y = 0;

	for (; y <= 9; y++)
	{
		int x = 'a';

		for (; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
