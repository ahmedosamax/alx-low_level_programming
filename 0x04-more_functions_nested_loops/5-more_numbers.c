#include "main.h"
/**
 * more_numbers - print digits(0 to 14) 10 times in newline
 * void function doesnt accept input
 * Return: 0 if success
 */
void more_numbers(void)
{
	int i;
	int j = 49;
	int k;

	for (i = 0; i <= 9; i++)
	{
		int num;

		for (num = 48; num <= 57; num++)
			_putchar  (num);
		for (k = 48; k <= 52; k++)
		{
			_putchar(j);
			_putchar(k);
		}
		_putchar('\n');
	}
}
