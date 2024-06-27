#include "main.h"
/**
 * more_numbers - print digits(0 to 14) 10 times in newline
 * void function doesnt accept input
 * Return: 0 if success
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int num;

		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
