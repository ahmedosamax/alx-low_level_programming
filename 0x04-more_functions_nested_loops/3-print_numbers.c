#include "main.h"
/**
 * print_numbers - print digits(0 to 9)
 * void function doesnt accept input
 * Return: 0 if success
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		_putchar (num);
	_putchar('\n');
}
