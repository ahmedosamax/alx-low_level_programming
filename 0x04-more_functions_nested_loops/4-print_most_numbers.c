#include "main.h"
/**
 * print_most_numbers - print digits(0 to 9) except '2' and '4'
 * void function doesnt accept input
 * Return: 0 if success
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
			continue;
		_putchar (num);
	}
	_putchar ('\n');
}
