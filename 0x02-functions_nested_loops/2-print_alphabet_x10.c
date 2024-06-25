#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
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
